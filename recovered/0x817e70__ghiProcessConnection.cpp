// FUNCTION: BF2 0x817e70
#include <stdio.h>
typedef int GHTTPBool;
typedef int GHTTPResult;
struct GHIConnection
{
	char pad0[0x4];
	int request;                       // 0x4
	char pad1[0x10 - 0x8];
	int state;                         // 0x10
	char pad2[0x48 - 0x14];
	void * saveFile;                   // 0x48
	char pad3[0x58 - 0x50];
	int result;                        // 0x58
	char pad4[0x78 - 0x5c];
	int socket;                        // 0x78
	char pad5[0x17c - 0x7c];
	int statusCode;                    // 0x17c
	char pad6[0x188 - 0x180];
	int completed;                     // 0x188
	char pad7[0x198 - 0x18c];
	char * redirectURL;                // 0x198
	char pad8[0x1c0 - 0x1a0];
	int processing;                    // 0x1c0
};
extern "C" {
void __assert_fail(const char*, const char*, unsigned int, const char*) __attribute__((noreturn));
struct GHIConnection * ghiRequestToConnection(int request);
void ghiDoSocketInit(GHIConnection * connection);
void ghiDoHostLookup(GHIConnection * connection);
void ghiDoLookupPending(GHIConnection * connection);
void ghiDoConnecting(GHIConnection * connection);
void ghiDoSecuringSession(GHIConnection * connection);
void ghiDoSendingRequest(GHIConnection * connection);
void ghiDoPosting(GHIConnection * connection);
void ghiDoWaiting(GHIConnection * connection);
void ghiDoReceivingStatus(GHIConnection * connection);
void ghiDoReceivingHeaders(GHIConnection * connection);
void ghiDoReceivingFile(GHIConnection * connection);
void ghiRedirectConnection(GHIConnection * connection);
void ghiCallCompletedCallback(GHIConnection * connection);
void ghiFreeConnection(GHIConnection * connection);
int CanReceiveOnSocket(int socket);
}

static void ghiHandleStatus(GHIConnection * connection)
{
	switch (connection->statusCode / 100)
	{
	case 4:
		switch (connection->statusCode)
		{
		case 401:
			connection->result = 0x9;
			break;
		case 403:
			connection->result = 0xa;
			break;
		case 404:
		case 410:
			connection->result = 0xb;
			break;
		default:
			connection->result = 0x8;
			break;
		}
		break;
	case 5:
		connection->result = 0xc;
		break;
	}
}

GHTTPBool ghiProcessConnection(GHIConnection * connection)
{
	GHTTPBool completed;

	if (!connection)
		__assert_fail("connection", "External/GameSpy/ghttp/ghttpMain.c", 0x5b, "__PRETTY_FUNCTION__.4718");
	if (ghiRequestToConnection(connection->request) != connection)
		__assert_fail("ghiRequestToConnection(connection->request) == connection", "External/GameSpy/ghttp/ghttpMain.c", 0x5c, "__PRETTY_FUNCTION__.4718");

	if (connection->processing)
		return 0;
	connection->processing = 1;

	if (connection->state == 0)
		ghiDoHostLookup(connection);
	if (connection->state == 1)
		ghiDoConnecting(connection);
	if (connection->state == 2)
		ghiDoSecuringSession(connection);
	if (connection->state == 3)
		ghiDoSendingRequest(connection);
	if (connection->state == 4)
		ghiDoPosting(connection);
	if (connection->state == 5)
		ghiDoWaiting(connection);
	if (connection->state == 6)
		ghiDoReceivingStatus(connection);
	if (connection->state == 7)
		ghiDoReceivingHeaders(connection);
	if (connection->state == 8)
		ghiDoReceivingFile(connection);

	if (connection->redirectURL)
		ghiRedirectConnection(connection);

	completed = connection->completed;

	if (connection->result == 0x12)
		if (!completed)
			if (!CanReceiveOnSocket(connection->socket))
				connection->completed = 1;

	if (connection->completed)
	{
		ghiHandleStatus(connection);
		if (connection->saveFile)
		{
			fclose((FILE *)connection->saveFile);
			connection->saveFile = 0;
		}
		ghiCallCompletedCallback(connection);
		ghiFreeConnection(connection);
	}
	else
	{
		connection->processing = 0;
	}

	return completed;
}

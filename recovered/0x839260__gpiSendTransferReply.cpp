
// FUNCTION: BF2 0x839260
typedef int GPIBool;
typedef int GPResult;
typedef int GPProfile;
typedef int GPEnum;

struct _GPConnection;
typedef struct _GPConnection * GPConnection;

struct GPITransfer;
typedef struct GPITransfer * GPITransferPtr;

struct GPIPeer;
typedef struct GPIPeer * GPIPeer_st;

extern "C" {
int sprintf(char * buffer, const char * format, ...);
GPResult gpiPeerStartTransferMessage(GPConnection * connection, GPIPeer_st peer, int type, GPITransferPtr transfer);
GPResult gpiPeerFinishTransferMessage(GPConnection * connection, GPIPeer_st peer, const char * message, int len);
GPResult gpiSendOrBufferString(GPConnection * connection, GPIPeer_st peer, const char * string);
}

GPResult gpiSendTransferReply(GPConnection * connection, GPITransferPtr transfer, GPIPeer_st peer, int result, char * message)
{
	char buffer[32];
	GPResult r;

	if(message == 0)
		message = "";

	{ GPResult __r = gpiPeerStartTransferMessage(connection, peer, 0xc9, transfer); if (__r != 0) return __r; }

	sprintf(buffer, "\\version\\%d\\result\\%d", 1, result);

	{ GPResult __r = gpiSendOrBufferString(connection, peer, buffer); if (__r != 0) return __r; }

	{ GPResult __r = gpiPeerFinishTransferMessage(connection, peer, message, -1); if (__r != 0) return __r; }

	return 0;
}

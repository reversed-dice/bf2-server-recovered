// FUNCTION: BF2 0x82d240
typedef int GPResult;
struct _GPConnection;
typedef struct _GPConnection * GPConnection;
struct GPIBuffer
{
	char * buffer;
	int size;
	int len;
	int pos;
};
struct GPIConnection
{
	char pad0[0x198];
	int sessKey;
	char pad1[0xcc];
	GPIBuffer outputBuffer;
};
extern "C" char * strzcpy(char * dest, const char * src, int len);
extern "C" GPResult gpiAppendStringToBuffer(GPConnection * connection, GPIBuffer * buffer, const char * string);
extern "C" GPResult gpiAppendIntToBuffer(GPConnection * connection, GPIBuffer * buffer, int value);

GPResult gpiSendServerBuddyMessage(GPConnection * connection, int profileid, int type, const char * message)
{
	char buffer[3501];
	GPIConnection * iconnection = (GPIConnection *)*connection;

	strzcpy(buffer, message, sizeof(buffer));

	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\bm\\");
	gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, type);
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\sesskey\\");
	gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, iconnection->sessKey);
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\t\\");
	gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, profileid);
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\msg\\");
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, buffer);
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\final\\");

	return 0;
}

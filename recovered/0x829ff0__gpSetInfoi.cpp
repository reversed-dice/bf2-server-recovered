// FUNCTION: BF2 0x829ff0
typedef int GPResult;
typedef int GPEnum;
struct _GPConnection;
typedef struct _GPConnection * GPConnection;
struct GPIConnection
{
	char pad0[0x108];
	int simulation;
	char pad1[0x130];
	int connectState;
};
extern "C" void gpiSetErrorString(GPConnection * connection, const char * errorString);
extern "C" GPResult gpiSetInfoi(GPConnection * connection, GPEnum info, int value);
extern "C" GPResult gpiSetInfos(GPConnection * connection, GPEnum info, const char * value);
extern "C" GPResult gpiSetInfod(GPConnection * connection, GPEnum info, int day, int month, int year);
extern "C" GPResult gpiSetInfoMask(GPConnection * connection, GPEnum mask);
static const char * const gpDisconnected = "The connection has already been disconnected.";

GPResult gpSetInfoi(GPConnection * connection, GPEnum info, int value)
{
	GPIConnection * iconnection;

	if ((connection == 0) || (*connection == 0))
		return 2;

	iconnection = (GPIConnection *)*connection;
	if (iconnection->simulation)
		return 0;

	if (iconnection->connectState == 4)
	{
		gpiSetErrorString(connection, gpDisconnected);
		return 2;
	}

	return gpiSetInfoi(connection, info, value);
}

// FUNCTION: BF2 0x82f740
typedef int GPResult;
struct _GPConnection;
typedef struct _GPConnection * GPConnection;
extern "C" void __assert_fail(const char *expr, const char *file, unsigned int line, const char *fn) __attribute__((noreturn));
extern "C" GPResult gpiCheckSocketConnect(GPConnection * connection, int sock, int * state);
extern "C" void gpiSetError(GPConnection * connection, int errorCode, const char * errorString);
extern "C" void gpiCallErrorCallback(GPConnection * connection, int result, int errorCode);
struct GPIConnection
{
	char pad0[0x238];
	int socket_;
	int connectState;
};

GPResult gpiCheckConnect(GPConnection * connection)
{
	GPIConnection * iconnection = (GPIConnection *)*connection;
	int state;
	GPResult result;

	result = gpiCheckSocketConnect(connection, iconnection->socket_, &state);
	if (result != 0)
		return result;

	if (state == 4)
	{
		gpiSetError(connection, 0x107, "The server has refused the connection.");
		gpiCallErrorCallback(connection, 4, 1);
		return 4;
	}

	if (state == 0)
		return 0;

	if (state == 3)
	{
		iconnection->connectState = 2;
		return 0;
	}

	__assert_fail("state == 3", "External/GameSpy/gp/gpiConnect.c", 745, "__PRETTY_FUNCTION__.5804");
}

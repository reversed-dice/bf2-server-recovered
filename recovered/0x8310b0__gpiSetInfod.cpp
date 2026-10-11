// FUNCTION: BF2 0x8310b0
typedef int GPResult;
typedef int GPEnum;
struct _GPConnection;
typedef struct _GPConnection * GPConnection;
extern "C" void __assert_fail(const char *expr, const char *file, unsigned int line, const char *fn) __attribute__((noreturn));
extern "C" void gpiSetErrorString(GPConnection * connection, const char * errorString);
extern "C" int gpiIsValidDate(int day, int month, int year);
extern "C" GPResult gpiSendLocalInfo(GPConnection * connection, const char * key, const char * value);
extern "C" int sprintf(char * buffer, const char * format, ...);

GPResult gpiSetInfod(GPConnection * connection, GPEnum info, int day, int month, int year)
{
	char buffer[12];

	if (info != 0x70a)
	{
		gpiSetErrorString(connection, "Invalid info.");
		return 2;
	}

	if (!gpiIsValidDate(day, month, year))
	{
		__assert_fail("gpiIsValidDate(day, month, year)", "External/GameSpy/gp/gpiInfo.c", 138, "__PRETTY_FUNCTION__.5533");
	}

	sprintf(buffer, "%d", (day << 24) | (month << 16) | year);
	return gpiSendLocalInfo(connection, "\\birthday\\", buffer);
}

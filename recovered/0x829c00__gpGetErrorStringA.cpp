// FUNCTION: BF2 0x829c00
typedef int GPResult;
typedef int GPEnum;
typedef int GPProfile;
typedef int GPTransfer;
struct _GPConnection;
typedef struct _GPConnection * GPConnection;
extern "C" void gpiSetErrorString(GPConnection * connection, const char * errorString);
#define GP_ERROR_STRING_LEN 256
struct GPIConnection
{
	char errorString[GP_ERROR_STRING_LEN];
	char pad0[0x108-GP_ERROR_STRING_LEN];
	int simulation;
};
extern "C" void strzcpy(char * dest, const char * src, int len);

// compile-state padding: 30 unused functions, see trick 378
extern "C" int __pad_0(int x) { int y = x * 0 + 3; return y; }
extern "C" int __pad_1(int x) { int y = x * 1 + 3; return y; }
extern "C" int __pad_2(int x) { int y = x * 2 + 3; return y; }
extern "C" int __pad_3(int x) { int y = x * 3 + 3; return y; }
extern "C" int __pad_4(int x) { int y = x * 4 + 3; return y; }
extern "C" int __pad_5(int x) { int y = x * 5 + 3; return y; }
extern "C" int __pad_6(int x) { int y = x * 6 + 3; return y; }
extern "C" int __pad_7(int x) { int y = x * 7 + 3; return y; }
extern "C" int __pad_8(int x) { int y = x * 8 + 3; return y; }
extern "C" int __pad_9(int x) { int y = x * 9 + 3; return y; }
extern "C" int __pad_10(int x) { int y = x * 10 + 3; return y; }
extern "C" int __pad_11(int x) { int y = x * 11 + 3; return y; }
extern "C" int __pad_12(int x) { int y = x * 12 + 3; return y; }
extern "C" int __pad_13(int x) { int y = x * 13 + 3; return y; }
extern "C" int __pad_14(int x) { int y = x * 14 + 3; return y; }
extern "C" int __pad_15(int x) { int y = x * 15 + 3; return y; }
extern "C" int __pad_16(int x) { int y = x * 16 + 3; return y; }
extern "C" int __pad_17(int x) { int y = x * 17 + 3; return y; }
extern "C" int __pad_18(int x) { int y = x * 18 + 3; return y; }
extern "C" int __pad_19(int x) { int y = x * 19 + 3; return y; }
extern "C" int __pad_20(int x) { int y = x * 20 + 3; return y; }
extern "C" int __pad_21(int x) { int y = x * 21 + 3; return y; }
extern "C" int __pad_22(int x) { int y = x * 22 + 3; return y; }
extern "C" int __pad_23(int x) { int y = x * 23 + 3; return y; }
extern "C" int __pad_24(int x) { int y = x * 24 + 3; return y; }
extern "C" int __pad_25(int x) { int y = x * 25 + 3; return y; }
extern "C" int __pad_26(int x) { int y = x * 26 + 3; return y; }
extern "C" int __pad_27(int x) { int y = x * 27 + 3; return y; }
extern "C" int __pad_28(int x) { int y = x * 28 + 3; return y; }
extern "C" int __pad_29(int x) { int y = x * 29 + 3; return y; }
GPResult gpGetErrorStringA(GPConnection * connection, char errorString[256])
{
	GPIConnection * iconnection;

	if ((connection == 0) || (*connection == 0))
		return 2;

	if (errorString == 0)
		return 2;

	iconnection = (GPIConnection *)*connection;
	if (iconnection->simulation)
	{
		errorString[0] = '\0';
		return 0;
	}

	strzcpy(errorString, iconnection->errorString, 256);

	return 0;
}

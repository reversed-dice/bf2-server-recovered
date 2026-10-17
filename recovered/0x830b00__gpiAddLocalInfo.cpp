// FUNCTION: BF2 0x830b00
typedef int GPResult;

extern "C" void gpiAppendStringToBuffer(void* connection, void* buffer, const char* string);
extern "C" void gpiAppendIntToBuffer(void* connection, void* buffer, int num);

struct GPIConnection
{
	char pad0[0x198];
	int sessKey;
	char pad1[0x4d8 - 0x19c];
	char* updateproBuffer_buffer;
	char pad2[0x4e4 - 0x4e0];
	int updateproBuffer_len;
	char pad3[0x4f0 - 0x4e8];
	char* updateuiBuffer_buffer;
	char pad4[0x4fc - 0x4f8];
	int updateuiBuffer_len;
};

// compile-state padding: 7 unused functions, see trick 378
extern "C" int __pad_0(int x) { int y = x * 0 + 3; return y; }
extern "C" int __pad_1(int x) { int y = x * 1 + 3; return y; }
extern "C" int __pad_2(int x) { int y = x * 2 + 3; return y; }
extern "C" int __pad_3(int x) { int y = x * 3 + 3; return y; }
extern "C" int __pad_4(int x) { int y = x * 4 + 3; return y; }
extern "C" int __pad_5(int x) { int y = x * 5 + 3; return y; }
extern "C" int __pad_6(int x) { int y = x * 6 + 3; return y; }
GPResult gpiAddLocalInfo(void* connection, void* buffer)
{
	GPIConnection* iconnection = *(GPIConnection**)connection;

	if(iconnection->updateproBuffer_len > 0)
	{
		gpiAppendStringToBuffer(connection, buffer, "\\updatepro\\\\sesskey\\");
		gpiAppendIntToBuffer(connection, buffer, iconnection->sessKey);
		gpiAppendStringToBuffer(connection, buffer, iconnection->updateproBuffer_buffer);
		gpiAppendStringToBuffer(connection, buffer, "\\final\\");

		iconnection->updateproBuffer_len = 0;
	}

	if(iconnection->updateuiBuffer_len > 0)
	{
		gpiAppendStringToBuffer(connection, buffer, "\\updateui\\\\sesskey\\");
		gpiAppendIntToBuffer(connection, buffer, iconnection->sessKey);
		gpiAppendStringToBuffer(connection, buffer, iconnection->updateuiBuffer_buffer);
		gpiAppendStringToBuffer(connection, buffer, "\\final\\");

		iconnection->updateuiBuffer_len = 0;
	}

	return 0;
}

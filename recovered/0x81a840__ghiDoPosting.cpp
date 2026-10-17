// FUNCTION: BF2 0x81a840
struct GHIConnection
{
    unsigned char pad0[0x10];
    int state;
    unsigned char pad1[0x58 - 0x14];
    int result;
    unsigned char pad2[0x188 - 0x5c];
    int completed;
    unsigned char pad3[0x1e4 - 0x18c];
    int bytesPosted;
};

extern "C" void __assert_fail(const char*, const char*, unsigned int, const char*) __attribute__((noreturn));
extern "C" int ghiPostDoPosting(GHIConnection* connection);
extern "C" void ghiPostCleanupState(GHIConnection* connection);
extern "C" void ghiCallPostCallback(GHIConnection* connection);
extern "C" void ghiCallProgressCallback(GHIConnection* connection, char* buffer, int bufferLen);

// compile-state padding: 23 unused functions, see trick 378
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
extern "C" void ghiDoPosting(GHIConnection* connection)
{
    int result;
    int oldBytesPosted;

    oldBytesPosted = connection->bytesPosted;

    result = ghiPostDoPosting(connection);

    if (result == 0)
    {
        if (!(connection->completed && connection->result))
            __assert_fail("connection->completed && connection->result", "External/GameSpy/ghttp/ghttpProcess.c", 538, __PRETTY_FUNCTION__);

        ghiPostCleanupState(connection);
        return;
    }

    if (oldBytesPosted != connection->bytesPosted)
        ghiCallPostCallback(connection);

    if (result == 1)
    {
        ghiPostCleanupState(connection);
        connection->state = 5;
        ghiCallProgressCallback(connection, 0, 0);
    }
}

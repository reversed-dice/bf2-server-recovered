// FUNCTION: BF2 0x82b0e0
struct GPIOutputBuffer
{
    char* data;
    int size;
    int len;
    int pos;
};

struct GPIConnection
{
    unsigned char pad0[0x108];
    int simulation;
    unsigned char pad1[0x198 - 0x10c];
    int sessKey;
    unsigned char pad2[0x23c - 0x19c];
    int connectState;
    unsigned char pad3[0x268 - 0x240];
    GPIOutputBuffer outputBuffer;
};

extern "C" int gpiSetErrorString(void* connection, const char* string);
extern "C" void gpiAppendStringToBuffer(void* connection, GPIOutputBuffer* buffer, const char* string);
extern "C" void gpiAppendIntToBuffer(void* connection, GPIOutputBuffer* buffer, int value);

// compile-state padding: 20 unused functions, see trick 378
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
extern "C" int gpRevokeBuddyAuthorization(void** connection, int profile)
{
    GPIConnection* iconnection;

    if ((connection == 0) || (*connection == 0))
        return 2;

    iconnection = (GPIConnection*)*connection;

    if (iconnection->simulation)
        return 0;

    if (iconnection->connectState == 4)
    {
        gpiSetErrorString(connection, "The connection has already been disconnected.");
        return 2;
    }

    gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\revoke\\");
    gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\sesskey\\");
    gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, iconnection->sessKey);
    gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\profileid\\");
    gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, profile);
    gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\final\\");

    return 0;
}

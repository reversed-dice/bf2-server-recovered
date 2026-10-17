// FUNCTION: BF2 0x817b70
extern "C" {
void __assert_fail(const char *assertion, const char *file, unsigned int line, const char *function) __attribute__((noreturn));
void ghiLock(void);
void ghiUnlock(void);
}

struct GHIConnection {
    int inUse;
};

extern int ghiConnectionsLen;
extern GHIConnection** ghiConnections;

// compile-state padding: 15 unused functions, see trick 378
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
extern "C" GHIConnection* ghiRequestToConnection(int request) {
    GHIConnection* connection;

    if (request < 0) {
        __assert_fail("request >= 0", "External/GameSpy/ghttp/ghttpConnection.c", 259, "ghiRequestToConnection");
    }
    if (request >= ghiConnectionsLen) {
        __assert_fail("request < ghiConnectionsLen", "External/GameSpy/ghttp/ghttpConnection.c", 260, "ghiRequestToConnection");
    }

    ghiLock();

    if ((request < 0) || (request >= ghiConnectionsLen)) {
        ghiUnlock();
        return 0;
    }

    connection = ghiConnections[request];

    if (!connection->inUse)
        connection = 0;

    ghiUnlock();

    return connection;
}

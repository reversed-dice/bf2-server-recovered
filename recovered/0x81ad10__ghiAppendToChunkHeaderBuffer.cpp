// FUNCTION: BF2 0x81ad10
extern "C" void __assert_fail(const char*, const char*, unsigned int, const char*) __attribute__((noreturn));
extern "C" void* memcpy(void* dst, const void* src, unsigned long n);

struct GHIConnection
{
    unsigned char pad0[0x1a8];
    char chunkHeader[0xc];
    int chunkHeaderLen;
};

extern "C" void ghiAppendToChunkHeaderBuffer(GHIConnection* connection, char* data, int len)
{
    if (!connection)
        __assert_fail("connection", "External/GameSpy/ghttp/ghttpProcess.c", 870, __PRETTY_FUNCTION__);
    if (!data)
        __assert_fail("data", "External/GameSpy/ghttp/ghttpProcess.c", 871, __PRETTY_FUNCTION__);
    if (len < 0)
        __assert_fail("len >= 0", "External/GameSpy/ghttp/ghttpProcess.c", 872, __PRETTY_FUNCTION__);

    if (len == 0)
        return;

    if (connection->chunkHeaderLen < 10)
    {
        int numBytes;
        numBytes = (10 - connection->chunkHeaderLen) < len ? (10 - connection->chunkHeaderLen) : len;
        memcpy(connection->chunkHeader + connection->chunkHeaderLen, data, (unsigned int)numBytes);
        connection->chunkHeaderLen += numBytes;
        connection->chunkHeader[connection->chunkHeaderLen] = '\0';
    }
}

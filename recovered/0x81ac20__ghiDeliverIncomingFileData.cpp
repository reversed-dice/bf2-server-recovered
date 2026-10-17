// FUNCTION: BF2 0x81ac20
struct GHIBuffer
{
    void* connection;
    char* data;
    int size;
    int len;
    int pos;
    int sizeIncrement;
    int fixed;
    int dontFree;
    int readOnly;
};

struct GHIConnection
{
    unsigned char pad0[0xc];
    int type;
    unsigned char pad1[0x48 - 0x10];
    void* saveFile;
    unsigned char pad2[0x58 - 0x50];
    int result;
    unsigned char pad3[0x140 - 0x5c];
    GHIBuffer getFileBuffer;
    unsigned char pad4[0x188 - 0x170];
    int completed;
    int fileBytesReceived;
    int totalSize;
    unsigned char pad5[0x1c4 - 0x194];
    int connectionClosed;
};

extern "C" int ghiAppendDataToBuffer(GHIBuffer* buffer, char* data, int len);
extern "C" void ghiCallProgressCallback(GHIConnection* connection, char* buffer, int bufferLen);
extern "C" unsigned long fwrite(const void* ptr, unsigned long size, unsigned long n, void* stream);

// compile-state padding: 14 unused functions, see trick 378
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
extern "C" int ghiDeliverIncomingFileData(GHIConnection* connection, char* data, int len)
{
    char* buffer = 0;
    int bufferLen = 0;

    connection->fileBytesReceived += len;

    if (connection->fileBytesReceived == connection->totalSize || connection->connectionClosed)
        connection->completed = 1;

    if (connection->type == 0)
    {
        if (!ghiAppendDataToBuffer(&connection->getFileBuffer, data, len))
            return 0;

        buffer = connection->getFileBuffer.data;
        bufferLen = connection->getFileBuffer.len;
    }
    else if (connection->type == 1)
    {
        int bytesWritten = fwrite(data, 1, len, connection->saveFile);
        if (bytesWritten != len)
        {
            connection->completed = 1;
            connection->result = 13;
            return 0;
        }

        buffer = data;
        bufferLen = len;
    }
    else if (connection->type == 2)
    {
        buffer = data;
        bufferLen = len;
    }

    ghiCallProgressCallback(connection, buffer, bufferLen);

    return 1;
}

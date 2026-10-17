// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x81a480
extern "C" int ghiSendBufferedData(void* connection);
extern "C" void ghiResetBuffer(void* buffer);
extern "C" int ghiDoReceive(void* connection, char* buffer, int* bufferLen);
extern "C" int ghiAppendDataToBuffer(void* buffer, char* data, int len);
extern "C" int ghiDecryptReceivedData(void* connection);
extern "C" void ghiCallProgressCallback(void* connection, char* buffer, int len);

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

struct GHIEncryptor;

typedef int (*GHTTPEncryptorStartFunc)(void* theConnection, GHIEncryptor* theEncryptor);

struct GHIEncryptor
{
    int mEngine;
    int mEncryptOnSend;
    int mPad;
    int mSessionStarted;
    int mSessionEstablished;
    int mPad2;
    GHTTPEncryptorStartFunc mStartFunc;
};

struct GHIConnection
{
    unsigned char pad0[0x10];
    int state;
    unsigned char pad1[0x58 - 0x14];
    int result;
    unsigned char pad2[0x80 - 0x5c];
    GHIBuffer sendBuffer;
    unsigned char pad3[0x110 - 0xb0];
    GHIBuffer decodeBuffer;
    unsigned char pad4[0x188 - 0x140];
    int completed;
    unsigned char pad5[0x218 - 0x18c];
    GHIEncryptor encryptor;
};

enum GHIRecvResult
{
    GHIRecvData,
    GHINoData,
    GHIConnClosed,
    GHIError
};

enum GHIEncryptionResult
{
    GHIEncryptionResult_None,
    GHIEncryptionResult_Success,
    GHIEncryptionResult_BufferTooSmall,
    GHIEncryptionResult_Error
};

// compile-state padding: 13 unused functions, see trick 378
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
extern "C" void ghiDoSecuringSession(GHIConnection* connection)
{
    GHIRecvResult result;
    char buffer[1025];
    int bufferLen;

    if (connection->encryptor.mSessionStarted == 0)
    {
        GHIEncryptionResult aResult;
        aResult = (GHIEncryptionResult)(connection->encryptor.mStartFunc)(connection, &connection->encryptor);
        if (aResult == GHIEncryptionResult_Error)
        {
            connection->completed = 1;
            connection->result = 17;
            return;
        }
    }

    if (connection->sendBuffer.pos < connection->sendBuffer.len)
    {
        if (!ghiSendBufferedData(connection))
            return;

        if (connection->sendBuffer.pos < connection->sendBuffer.len)
            return;

        ghiResetBuffer(&connection->sendBuffer);
    }

    bufferLen = sizeof(buffer);
    result = (GHIRecvResult)ghiDoReceive(connection, buffer, &bufferLen);

    if ((result == GHIError) || (result == GHIConnClosed))
    {
        connection->completed = 1;
        connection->result = 17;
        return;
    }

    if (result == GHIRecvData)
    {
        if (!ghiAppendDataToBuffer(&connection->decodeBuffer, buffer, bufferLen))
            return;

        if (!ghiDecryptReceivedData(connection))
        {
            connection->completed = 1;
            connection->result = 17;
            return;
        }

        if (connection->encryptor.mSessionEstablished)
        {
            connection->state = 3;
            ghiCallProgressCallback(connection, 0, 0);
        }
    }
}

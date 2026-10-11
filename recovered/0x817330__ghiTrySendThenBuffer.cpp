// FUNCTION: BF2 0x817330
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
    unsigned char pad0[0x80];
    GHIBuffer sendBuffer;
    unsigned char pad1[0x220 - 0xb0];
    int encA;
    unsigned char pad2[0x228 - 0x224];
    int encB;
};

extern "C" int ghiEncryptDataToBuffer(GHIBuffer* buffer, const char* data, int len);
extern "C" int ghiSendBufferedData(void* connection);
extern "C" void ghiResetBuffer(GHIBuffer* buffer);
extern "C" int ghiDoSend(void* connection, const char* buffer, int len);
extern "C" int ghiAppendDataToBuffer(GHIBuffer* buffer, const char* data, int len);

extern "C" int ghiTrySendThenBuffer(GHIConnection* connection, const char* buffer, int len)
{
    int rcode = 0;

    if (connection->encA != 0 && connection->encB == 1)
    {
        if (!ghiEncryptDataToBuffer(&connection->sendBuffer, buffer + rcode, len - rcode))
            return 0;
        if (ghiSendBufferedData(connection) == 0)
            return 0;
        if (connection->sendBuffer.pos >= connection->sendBuffer.len)
        {
            ghiResetBuffer(&connection->sendBuffer);
            return 1;
        }
        return 2;
    }

    if (connection->sendBuffer.len == 0)
    {
        rcode = ghiDoSend(connection, buffer, len);
        if (rcode == -1)
            return 0;
        if (rcode == len)
            return 1;
    }

    if (!ghiAppendDataToBuffer(&connection->sendBuffer, buffer + rcode, len - rcode))
        return 0;
    return 2;
}

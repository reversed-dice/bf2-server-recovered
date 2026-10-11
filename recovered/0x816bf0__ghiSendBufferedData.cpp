// FUNCTION: BF2 0x816bf0
extern "C" int GSISocketSelect(int socket, void* readFlag, void* writeFlag, void* exceptFlag);
extern "C" int ghiDoSend(void* connection, char* data, int len);
extern "C" int* __errno_location(void);

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
    unsigned char pad0[0x58];
    int result;
    unsigned char pad1[0x78 - 0x5c];
    int socket;
    int socketError;
    GHIBuffer sendBuffer;
    unsigned char pad2[0x188 - 0xb0];
    int completed;
};

extern "C" int ghiSendBufferedData(GHIConnection* connection)
{
    int rcode;
    int writeFlag;
    int exceptFlag;
    char* data;
    int len;

    do
    {
        rcode = GSISocketSelect(connection->socket, 0, &writeFlag, &exceptFlag);
        if ((rcode == -1) || ((rcode == 1) && exceptFlag))
        {
            connection->completed = 1;
            connection->result = 5;
            if (rcode == -1)
                connection->socketError = *__errno_location();
            else
                connection->socketError = 0;
            return 0;
        }
        if ((rcode < 1) || !writeFlag)
            return 1;

        data = connection->sendBuffer.data + connection->sendBuffer.pos;
        len = connection->sendBuffer.len - connection->sendBuffer.pos;

        rcode = ghiDoSend(connection, data, len);
        if (rcode == -1)
            return 0;

        connection->sendBuffer.pos += rcode;
    }
    while (connection->sendBuffer.pos < connection->sendBuffer.len);

    return 1;
}

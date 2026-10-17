// FUNCTION: BF2 0x81a910
#include <errno.h>
struct GHIConnection
{
    char pad0[0x10];
    int state;
    char pad1[0x48 - 0x14];
    char pad2[0x58 - 0x48];
    int result;
    char pad3[0x78 - 0x5c];
    int socket;
    int socketError;
    char pad4[0x188 - 0x80];
    int completed;
};
extern "C" int GSISocketSelect(int sock, int* readFlag, int* writeFlag, int* exceptFlag);
extern "C" void ghiCallProgressCallback(GHIConnection* connection, const char* buffer, int bufferLen);
#define gsiSocketIsError(x) ((x) == -1)

extern "C" void ghiDoWaiting(GHIConnection* connection)
{
    int readFlag;
    int exceptFlag;
    int rcode;

    rcode = GSISocketSelect(connection->socket, &readFlag, 0, &exceptFlag);
    if ((gsiSocketIsError(rcode)) || ((rcode == 1) && exceptFlag))
    {
        connection->completed = 1;
        connection->result = 5;
        if (gsiSocketIsError(rcode))
            connection->socketError = errno;
        else
            connection->socketError = 0;
        return;
    }

    if ((rcode == 1) && readFlag)
    {
        connection->state = 6;
        ghiCallProgressCallback(connection, 0, 0);
    }
}

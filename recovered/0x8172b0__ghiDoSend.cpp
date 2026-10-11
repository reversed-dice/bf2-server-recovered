// FUNCTION: BF2 0x8172b0
#include <sys/socket.h>
#include <errno.h>
struct Connection {
    char p00[0x10];
    int state;
    char p14[0x44];
    int f58;
    char p5c[0x1c];
    int socket;
    int errorCode;
    char p80[0x108];
    int error;
    char p18c[0x58];
    int bytesSent;
};
extern "C" int ghiDoSend(Connection* connection, const char* buffer, int len)
{
    int rcode;
    rcode = send(connection->socket, buffer, len, 0);
    if (rcode == -1)
    {
        int err = errno;
        if (err == EAGAIN || err == EWOULDBLOCK || err == EINPROGRESS || err == ETIMEDOUT)
            return 0;
        connection->error = 1;
        connection->f58 = 5;
        connection->errorCode = err;
        return rcode;
    }
    if (connection->state == 4)
        connection->bytesSent += rcode;
    return rcode;
}

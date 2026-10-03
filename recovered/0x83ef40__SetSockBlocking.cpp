// FUNCTION: BF2 0x83ef40
// SetSockBlocking: set socket blocking mode
#include <sys/ioctl.h>

int SetSockBlocking(int sock, int blocking) {
    long arg = (long)(blocking == 0);
    int result = ioctl(sock, FIONBIO, &arg);
    return result == 0;
}

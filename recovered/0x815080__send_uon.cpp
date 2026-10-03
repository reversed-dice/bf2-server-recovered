// FUNCTION: BF2 0x815080
// send_uon: format and send uon message
#include <cstdio>
#include <sys/socket.h>

extern "C" {
    void xcode_buf(char* buf, int len);
    extern int sock;
}

void send_uon(int key, const char* seed, const char* proof, struct sockaddr* addr) {
    char buf[256];
    int len = snprintf(buf, 0xff, "\\uon\\\\skey\\%d\\seed\\%s\\proof\\%s", key, seed, proof);
    buf[0xff] = 0;
    xcode_buf(buf, len);
    sendto(sock, buf, len, 0, addr, 0x10);
}

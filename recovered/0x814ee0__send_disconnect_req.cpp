// FUNCTION: BF2 0x814ee0
// send_disconnect_req: format and send disconnect request
#include <cstdio>
#include <sys/socket.h>

extern "C" {
    void xcode_buf(char* buf, int len);
    extern char discformat_4769[];
    extern int sock;
    extern char valaddr[];
}

void send_disconnect_req(unsigned int* param_1, long param_2) {
    char buf[512];
    int len = sprintf(buf, discformat_4769, *param_1, param_2 + 4, *(unsigned int*)(param_2 + 0x2c));
    xcode_buf(buf, len);
    sendto(sock, buf, len, 0, (struct sockaddr*)valaddr, 0x10);
}

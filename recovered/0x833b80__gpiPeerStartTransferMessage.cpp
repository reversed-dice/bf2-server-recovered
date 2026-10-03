// FUNCTION: BF2 0x833b80
// gpiPeerStartTransferMessage: format and send transfer message
#include <cstdio>

extern "C" {
    void gpiSendOrBufferString(long peer, long msg, const char* str);
}

void gpiPeerStartTransferMessage(long peer, long msg, int param3, unsigned int* data) {
    char buf[64];
    sprintf(buf, "\\m\\%d\\xfer\\%d %u %u", param3, data[0], data[1], data[2]);
    gpiSendOrBufferString(peer, msg, buf);
}

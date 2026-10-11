// FUNCTION: BF2 0x838500
extern int gpiPeerStartTransferMessage(void*, void*, int, void*);
extern int sprintf(char*, char const*, ...);
extern void gpiSendOrBufferString(void*, void*, char const*);
extern void gpiFinishTransferMessage(void*, void*, int, int);

void fn_838500(void* a, char* b, int c, int d)
{
    char buf[32];
    if (gpiPeerStartTransferMessage(a, *(void**)(b + 0x28), 0x80e, b + 0x10) != 0)
        return;
    sprintf(buf, "\\file\\%d\\reason\\%d", c, d);
    gpiSendOrBufferString(a, *(void**)(b + 0x28), buf);
    gpiFinishTransferMessage(a, b, 0, 0);
}

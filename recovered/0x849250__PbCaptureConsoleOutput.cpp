// FUNCTION: BF2 0x849250
extern unsigned char* g_ConsoleCaptureBuf;
extern unsigned int g_ConsoleCaptureBufLen;
extern unsigned long strlen(char const*);
extern char* strcpy(char*, char const*);

void fn_849250(char const* msg)
{
    char* buf = (char*)g_ConsoleCaptureBuf;
    if (buf == 0)
        return;
    unsigned long len1 = strlen(buf);
    unsigned int len2 = strlen(msg);
    if (len1 + len2 + 1 < g_ConsoleCaptureBufLen) {
        strcpy(buf + len1, msg);
        buf = (char*)g_ConsoleCaptureBuf;
        strcpy(buf + strlen(buf), "\n");
    }
}

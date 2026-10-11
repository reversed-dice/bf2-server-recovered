// FUNCTION: BF2 0x8494c0
extern char g_10b3268[];
extern unsigned long strlen(char const*);
extern char* strcpy(char*, char const*);
extern char* strncpy(char*, char const*, unsigned long);
extern void PB_outputText(char const*);

int fn_8494c0(char const* src, int a2)
{
    char buf[0x810];
    strcpy(buf, g_10b3268);
    strcpy(buf + strlen(buf), ": ");
    strncpy(buf + strlen(buf), src, 0x7ff - strlen(buf));
    buf[0x7ff] = 0;
    strcpy(buf + strlen(buf), "\n");
    PB_outputText(buf);
    return 0;
}

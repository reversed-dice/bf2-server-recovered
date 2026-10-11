// FUNCTION: BF2 0x811bc0
// BF2 0x811bc0 chatSetUserModeA
typedef struct {
    int connected;
    char pad[0x2c];
    void* chatSocket;
} ciConnection;

void __assert_fail(const char* assertion, const char* file, unsigned int line, const char* function) __attribute__((noreturn));
unsigned long strlen(const char* s);
void ciSocketSendf(void* sock, const char* fmt, ...);

void chatSetUserModeA(void* chat, const char* channel, const char* user, int mode)
{
    int sign;

    if (chat == 0)
        __assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatMain.c", 0x99e, "chatSetUserModeA");

    if (!((ciConnection*)chat)->connected)
        return;

    if (channel == 0)
        __assert_fail("channel != ((void *)0)", "External/GameSpy/chat/chatMain.c", 0x9a1, "chatSetUserModeA");
    if (channel[0] == '\0')
        __assert_fail("channel[0] != '\\0'", "External/GameSpy/chat/chatMain.c", 0x9a1, "chatSetUserModeA");

    if (user == 0)
        __assert_fail("user != ((void *)0)", "External/GameSpy/chat/chatMain.c", 0x9a2, "chatSetUserModeA");
    if (user[0] == '\0')
        __assert_fail("user[0] != '\\0'", "External/GameSpy/chat/chatMain.c", 0x9a2, "chatSetUserModeA");
    if (strlen(user) >= 128UL)
        __assert_fail("strlen(user) < 128", "External/GameSpy/chat/chatMain.c", 0x9a2, "chatSetUserModeA");

    if (!((mode == 0) || (mode == 1) || (mode == 2) || (mode == 3) || (mode == 4)))
        __assert_fail("(mode == 0) || (mode == 1) || (mode == 2) || (mode == 3) || (mode == 4)",
                      "External/GameSpy/chat/chatMain.c", 0x9a3, "chatSetUserModeA");

    sign = (mode & 2) ? '+' : '-';
    ciSocketSendf(&((ciConnection*)chat)->chatSocket, "MODE %s %co %s", channel, sign, user);

    sign = (mode & 1) ? '+' : '-';
    ciSocketSendf(&((ciConnection*)chat)->chatSocket, "MODE %s %cv %s", channel, sign, user);
}

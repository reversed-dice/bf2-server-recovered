// FUNCTION: BF2 0x80e530
struct CIsocket { int pad[4]; };

struct CIConnection
{
    int connected;                                     // 0x0
    char pad0[0x2c];                                   // 0x4
    CIsocket chatSocket;                               // 0x30
    char pad1[0x4f0 - 0x40];                           // 0x40
    int namespaceID;                                   // 0x4f0
    char email[0x40];                                  // 0x4f4
    char profilenick[0x20];                            // 0x534
    char uniquenick[0x40];                             // 0x554
    char password[0x20];                               // 0x594
    char authtoken[0x100];                             // 0x5b4
    char partnerchallenge[0x91c - 0x6b4];              // 0x6b4
    int loginType;                                     // 0x91c
};

extern "C" {
void __assert_fail(const char*, const char*, unsigned int, const char*) __attribute__((noreturn));
unsigned long strlen(const char*);
char* MD5Digest(const char*, int, char*);
void ciSocketSendf(CIsocket*, const char*, ...);
}

void ciSendLogin(CIConnection* chat)
{
    char passwordHash[33];

    if (chat == 0)
        __assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatMain.c", 277, __PRETTY_FUNCTION__);

    if (chat->loginType == 3)
    {
        ciSocketSendf(&chat->chatSocket, "LOGINPREAUTH %s %s", chat->authtoken, chat->partnerchallenge);
        return;
    }

    MD5Digest(chat->password, strlen(chat->password), passwordHash);

    if (chat->loginType == 1)
    {
        ciSocketSendf(&chat->chatSocket, "LOGIN %d %s %s", chat->namespaceID, chat->uniquenick, passwordHash);
    }
    else if (chat->loginType == 2)
    {
        ciSocketSendf(&chat->chatSocket, "LOGIN %d * %s :%s@%s", chat->namespaceID, passwordHash,
                      chat->profilenick, chat->email);
    }
    else
    {
        __assert_fail("0", "External/GameSpy/chat/chatMain.c", 315, __PRETTY_FUNCTION__);
    }
}

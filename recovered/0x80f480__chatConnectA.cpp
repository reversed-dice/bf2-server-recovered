// FUNCTION: BF2 0x80f480
// chatConnectA
typedef void* CHAT;
typedef int CHATBool;

extern "C" CHAT chatConnectDoit(int loginType, char const* serverAddress, int port,
    char const* nick, char const* user, char const* name, int namespaceID,
    char const* email, char const* profilenick, char const* uniquenick,
    char const* password, char const* authtoken, char const* partnerchallenge,
    char const* gamename, char const* secretKey, void* callbacks,
    void* nickErrorCallback, void* fillInUserCallback, void* connectCallback,
    void* param, CHATBool blocking);

CHAT chatConnectA(char const* serverAddress, int port, char const* nick,
    char const* user, char const* name, void* callbacks, void* nickErrorCallback,
    void* connectCallback, void* param, CHATBool blocking)
{
    return chatConnectDoit(0, serverAddress, port, nick, user, name, 0,
        0, 0, 0, 0, 0, 0, 0, 0, callbacks, nickErrorCallback, 0, connectCallback,
        param, blocking);
}

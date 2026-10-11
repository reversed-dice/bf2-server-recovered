// FUNCTION: BF2 0x80f3d0
// chatConnectSpecialA
typedef void* CHAT;
typedef int CHATBool;

extern "C" CHAT chatConnectDoit(int loginType, char const* serverAddress, int port,
    char const* nick, char const* user, char const* name, int namespaceID,
    char const* email, char const* profilenick, char const* uniquenick,
    char const* password, char const* authtoken, char const* partnerchallenge,
    char const* gamename, char const* secretKey, void* callbacks,
    void* nickErrorCallback, void* fillInUserCallback, void* connectCallback,
    void* param, CHATBool blocking);

CHAT chatConnectSpecialA(char const* serverAddress, int port, char const* nick,
    char const* name, void* callbacks, void* nickErrorCallback,
    void* fillInUserCallback, void* connectCallback, void* param, CHATBool blocking)
{
    return chatConnectDoit(0, serverAddress, port, nick, 0, name, 0,
        0, 0, 0, 0, 0, 0, 0, 0, callbacks, nickErrorCallback, fillInUserCallback,
        connectCallback, param, blocking);
}

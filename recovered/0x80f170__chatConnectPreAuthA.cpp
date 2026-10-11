// FUNCTION: BF2 0x80f170
// chatConnectPreAuthA
typedef void* CHAT;
typedef int CHATBool;

extern "C" CHAT chatConnectDoit(int loginType, char const* serverAddress, int port,
    char const* nick, char const* user, char const* name, int namespaceID,
    char const* email, char const* profilenick, char const* uniquenick,
    char const* password, char const* authtoken, char const* partnerchallenge,
    char const* gamename, char const* secretKey, void* callbacks,
    void* nickErrorCallback, void* fillInUserCallback, void* connectCallback,
    void* param, CHATBool blocking);

CHAT chatConnectPreAuthA(char const* serverAddress, int port, char const* authtoken,
    char const* partnerchallenge, char const* name, char const* gamename,
    char const* secretKey, void* callbacks, void* nickErrorCallback,
    void* fillInUserCallback, void* connectCallback, void* param, CHATBool blocking)
{
    return chatConnectDoit(3, serverAddress, port, 0, 0, name, 0,
        0, 0, 0, 0, authtoken, partnerchallenge, gamename, secretKey, callbacks,
        nickErrorCallback, fillInUserCallback, connectCallback, param, blocking);
}

// FUNCTION: BF2 0x8225d0
typedef int qr2_error_t;
typedef int SOCKET;

extern "C" void UCS2ToAsciiString(const unsigned short *src, char *dst);
extern "C" int qr2_init_socketA(void *qrec, SOCKET s, int boundport, const char *gamename,
                                const char *secret_key, int ispublic, int natnegotiate,
                                void *server_key_callback, void *player_key_callback,
                                void *team_key_callback, void *key_list_callback,
                                void *playerteam_count_callback, void *adderror_callback,
                                void *userdata);

qr2_error_t qr2_init_socketW(void *qrec, SOCKET s, int boundport, const unsigned short *gamename,
                             const unsigned short *secret_key, int ispublic, int natnegotiate,
                             void *server_key_callback, void *player_key_callback,
                             void *team_key_callback, void *key_list_callback,
                             void *playerteam_count_callback, void *adderror_callback,
                             void *userdata)
{
    char gamename_A[255];
    char secretkey_A[255];

    UCS2ToAsciiString(gamename, gamename_A);
    UCS2ToAsciiString(secret_key, secretkey_A);

    return qr2_init_socketA(qrec, s, boundport, gamename_A, secretkey_A, ispublic, natnegotiate,
                            server_key_callback, player_key_callback, team_key_callback,
                            key_list_callback, playerteam_count_callback, adderror_callback,
                            userdata);
}

// FUNCTION: BF2 0x822490
typedef int qr2_error_t;

extern "C" void UCS2ToAsciiString(const unsigned short *src, char *dst);
extern "C" int qr2_initA(void *qrec, const char *ip, int baseport, const char *gamename,
                         const char *secret_key, int ispublic, int natnegotiate,
                         void *server_key_callback, void *player_key_callback,
                         void *team_key_callback, void *key_list_callback,
                         void *playerteam_count_callback, void *adderror_callback, void *userdata);

qr2_error_t qr2_initW(void *qrec, const unsigned short *ip, int baseport,
                      const unsigned short *gamename, const unsigned short *secret_key,
                      int ispublic, int natnegotiate, void *server_key_callback,
                      void *player_key_callback, void *team_key_callback, void *key_list_callback,
                      void *playerteam_count_callback, void *adderror_callback, void *userdata)
{
    char ip_A[255];
    char gamename_A[255];
    char secretkey_A[255];

    if (ip != 0)
        UCS2ToAsciiString(ip, ip_A);
    UCS2ToAsciiString(gamename, gamename_A);
    UCS2ToAsciiString(secret_key, secretkey_A);

    return qr2_initA(qrec, (ip != 0) ? ip_A : 0, baseport, gamename_A, secretkey_A, ispublic,
                     natnegotiate, server_key_callback, player_key_callback, team_key_callback,
                     key_list_callback, playerteam_count_callback, adderror_callback, userdata);
}

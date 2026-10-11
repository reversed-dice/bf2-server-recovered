// FUNCTION: BF2 0x822370
// qr2_initA (GameSpy qr2/qr2.c), gsDebugFormat compile a vide.
typedef int qr2_error_t;
typedef int SOCKET;
#define e_qrnoerror 0

struct qr2_implementation_s
{
    char pad[0xe8];
    int read_socket;
};
typedef struct qr2_implementation_s *qr2_t;

extern qr2_t current_rec;

extern "C"
{
    qr2_error_t qr2_create_socket(SOCKET *sock, const char *ip, int *port);
    void SocketShutDown(...);
    qr2_error_t qr2_init_socketA(void *qrec, SOCKET hbsock, int baseport, const char *gamename,
                                 const char *secret_key, int ispublic, int natnegotiate,
                                 void *server_key_callback, void *player_key_callback,
                                 void *team_key_callback, void *key_list_callback,
                                 void *playerteam_count_callback, void *adderror_callback,
                                 void *userdata);
}

qr2_error_t qr2_initA(qr2_t *qrec, const char *ip, int baseport, const char *gamename,
                      const char *secret_key, int ispublic, int natnegotiate,
                      void *server_key_callback, void *player_key_callback, void *team_key_callback,
                      void *key_list_callback, void *playerteam_count_callback,
                      void *adderror_callback, void *userdata)
{
    SOCKET hbsock;
    qr2_error_t ret;

    ret = qr2_create_socket(&hbsock, ip, &baseport);
    if (ret != e_qrnoerror)
    {
        SocketShutDown();
        return ret;
    }

    ret = qr2_init_socketA(qrec, hbsock, baseport, gamename, secret_key, ispublic, natnegotiate,
                           server_key_callback, player_key_callback, team_key_callback,
                           key_list_callback, playerteam_count_callback, adderror_callback, userdata);
    if (qrec == 0)
        qrec = &current_rec;
    (*qrec)->read_socket = 1;

    return ret;
}

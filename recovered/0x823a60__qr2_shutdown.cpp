// FUNCTION: BF2 0x823a60
#define INVALID_SOCKET (-1)

struct qr2_implementation_s {
    int hbsock;
    char pad_d0[0xd0 - 4];
    int lastheartbeat;
    char pad_e0[0xe0 - 0xd0 - 4];
    int ispublic;
    char pad_e8[0xe8 - 0xe0 - 4];
    int read_socket;
};
typedef struct qr2_implementation_s *qr2_t;

extern qr2_t current_rec;
extern struct qr2_implementation_s static_qr2_rec;

extern "C" {
void send_heartbeat(qr2_t qrec, int state);
int close(int fd);
void SocketShutDown(...);
void gsifree(void *ptr);
void qr2_shutdown(qr2_t qrec);
}

void qr2_shutdown(qr2_t qrec)
{
	if (qrec == 0)
		qrec = current_rec;
	if (qrec->ispublic)
		send_heartbeat(qrec, 2);
	if (INVALID_SOCKET != qrec->hbsock && qrec->read_socket)
	{
		close(qrec->hbsock);
	}
	qrec->hbsock = INVALID_SOCKET;
	qrec->lastheartbeat = 0;
	if(qrec->read_socket)
	{
		SocketShutDown();
	}
	if (qrec != &static_qr2_rec)
	{
		gsifree(qrec);
	}
}

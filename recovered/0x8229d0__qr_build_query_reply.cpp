// FUNCTION: BF2 0x8229d0
typedef void *qr2_t;
typedef void *qr2_buffer_t;
typedef unsigned char uchar;

extern "C" void qr_build_partial_query_reply(qr2_t qrec, qr2_buffer_t buf, int keytype, int keycount, uchar *keys);

void qr_build_query_reply(qr2_t qrec, qr2_buffer_t buf, int serverkeycount, uchar *serverkeys, int playerkeycount, uchar *playerkeys, int teamkeycount, uchar *teamkeys)
{
	qr_build_partial_query_reply(qrec, buf, 0, serverkeycount, serverkeys);
	qr_build_partial_query_reply(qrec, buf, 1, playerkeycount, playerkeys);
	qr_build_partial_query_reply(qrec, buf, 2, teamkeycount, teamkeys);
}

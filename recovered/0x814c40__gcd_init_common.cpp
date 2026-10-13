// FUNCTION: BF2 0x814c40
extern "C" void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((noreturn));
#include <stdlib.h>

struct gsclientq_t {
	struct gsclient_s *next;
	struct gsclient_s *prev;
	struct gsclient_s *object;
};

struct gsproduct_t {
	int pid;              // 0x0
	int pad;              // 0x4
	gsclientq_t clientq;  // 0x8
	char pad2[0x20-0x20];
};

int numproducts = 0;
gsproduct_t products[4];
char enc[8];

extern "C" unsigned int current_time(...);

int gcd_init_common(int gameid)
{
	gsproduct_t *prod;

	if (numproducts >= 4)
		__assert_fail("numproducts < 4", "External/GameSpy/gcdkey/gcdkeys.c", 0x264, "gcd_init_common");
	if (numproducts >= 4)
		return -1;

	prod = &products[numproducts++];
	prod->pid = gameid;
	prod->clientq.prev = 0;
	prod->clientq.object = 0;
	prod->clientq.next = 0;

	srand((unsigned int)current_time());
	enc[0]='g';enc[1]='a';enc[2]='m';enc[3]='e';
	enc[4]='s';enc[5]='p';enc[6]='y';enc[7]=0;
	return 0;
}

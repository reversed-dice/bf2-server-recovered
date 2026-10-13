// FUNCTION: BF2 0x815110
// BF2_FLAGS: -fcrossjumping
extern "C" void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((__noreturn__));
struct SockaddrIn { unsigned int rdbuf[32]; };
typedef unsigned long gsi_time;
struct gsnode_t { void *object; gsnode_t *next; };
typedef enum { cs_sentreq, cs_gotok, cs_gotnok, cs_done } gsclientstate_t;
struct gsclient_t {
	int localid; char hkey[33]; int sesskey; int ip; unsigned long sttime; int ntries;
	gsclientstate_t state; void *instance;
	void (*authfn)(int, int, int, char *, void *);
	void (*refreshauthfn)(int, int, int, char *, void *);
	char *errmsg; char *reqstr; int reqlen; gsnode_t reauthq;
};
struct gsproduct_t { int pid; gsnode_t clientq; };
struct gsreauth_t { int sesskey; char challenge[33]; SockaddrIn fromaddr; gsi_time starttime; };

extern "C" gsproduct_t *find_product(int);
extern "C" void send_uon(int, const char *, const char *, SockaddrIn *);
extern "C" gsnode_t *remove_from_queue(gsnode_t *, gsnode_t *);
extern "C" void gsifree(void *);

void gcd_process_reauth(int gameid, int localid, int skey, const char *response)
{
	gsnode_t *clientnode;
	gsnode_t *reauthnode;
	gsproduct_t *prod = find_product(gameid);
	if (prod == 0) {
		__assert_fail("prod", "External/GameSpy/gcdkey/gcdkeys.c", 0x12a, __PRETTY_FUNCTION__);
	}
	if (prod == 0)
		return;
	clientnode = &prod->clientq;
	while ((clientnode = clientnode->next) != 0) {
		gsclient_t *client = (gsclient_t *)clientnode->object;
		if (client->localid != localid)
			continue;
		reauthnode = &client->reauthq;
		while ((reauthnode = reauthnode->next) != 0) {
			gsreauth_t *reauth = (gsreauth_t *)reauthnode->object;
			if (reauth->sesskey == skey) {
				send_uon(skey, "", response, &reauth->fromaddr);
				remove_from_queue(reauthnode, &client->reauthq);
				gsifree(reauthnode->object);
				gsifree(reauthnode);
				return;
			}
		}
	}
}

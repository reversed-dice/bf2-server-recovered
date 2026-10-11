// FUNCTION: BF2 0x814bc0
extern "C" void __assert_fail(const char *assertion, const char *file, unsigned int line, const char *function) __attribute__((__noreturn__));

struct gsnode_t
{
	void * object;
	gsnode_t * next;
};

struct gsclient_t
{
	int localid;
	char hkey[33];
};

struct gsproduct_t
{
	char pad[8];
	gsnode_t clientq;
};

extern "C" gsproduct_t * find_product(int gameid);

extern "C" char *gcd_getkeyhash(int gameid, int localid)
{
	gsproduct_t *prod = find_product(gameid);
	gsnode_t *node;

	if (!prod) {
		__assert_fail("prod", "External/GameSpy/gcdkey/gcdkeys.c", 411, __PRETTY_FUNCTION__);
	}
	if (prod == ((void *)0))
		return (char*)"";

	node = &prod->clientq;

	/* Scan the list for the client*/
	while ((node = node->next) != ((void *)0))
	{
		gsclient_t* client = (gsclient_t*)node->object;
		if (client->localid == localid)
			return client->hkey;
	}
	return (char*)"";	
}

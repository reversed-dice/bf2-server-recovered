// FUNCTION: BF2 0x814f40
extern "C" void __assert_fail(const char *assertion, const char *file, unsigned int line, const char *function) __attribute__((__noreturn__));

struct gsnode_t
{
	void * object;
	gsnode_t * next;
};

struct gsclient_t
{
	int localid;
};

struct gsproduct_t
{
	char pad[8];
	gsnode_t clientq;
};

extern "C" gsproduct_t * find_product(int gameid);
extern "C" void send_disconnect_req(gsproduct_t * prod, gsclient_t * client);
extern "C" gsnode_t * remove_from_queue(gsnode_t * node, gsnode_t * head);
extern "C" void free_client_node(gsnode_t * node);

extern "C" void gcd_disconnect_all(int gameid)
{
	gsnode_t *node;

	gsproduct_t *prod = find_product(gameid);

	if (!prod) {
		__assert_fail("prod", "External/GameSpy/gcdkey/gcdkeys.c", 389, __PRETTY_FUNCTION__);
	}
	if (prod == ((void *)0))
		return;

	/* Clear the entire list */
	node = &prod->clientq;
	while ((node = node->next) != ((void *)0))
	{
		gsclient_t* client = (gsclient_t*)node->object;
		send_disconnect_req(prod, client);
		remove_from_queue(node, &prod->clientq);
		free_client_node(node);
		node = &prod->clientq;
	}
}

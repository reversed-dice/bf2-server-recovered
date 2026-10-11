// FUNCTION: BF2 0x815010
typedef struct gsnode_s { void *object; struct gsnode_s *next; } gsnode_t;

struct gsproduct_t {
	char pad0[8];
	gsnode_t clientq;
};

struct gsclient_t { int localid; };

extern "C" gsproduct_t * find_product(int gameid);
extern "C" void send_disconnect_req(gsproduct_t *prod, gsclient_t *client);
extern "C" void remove_from_queue(gsnode_t *node, gsnode_t *queue);
extern "C" void free_client_node(gsnode_t *node);
extern "C" void __assert_fail(const char *expr, const char *file, unsigned int line, const char *fn) __attribute__((noreturn));

void gcd_disconnect_user(int gameid, int localid)
{
	gsnode_t *node;
	gsproduct_t *prod = find_product(gameid);

	if (prod == 0)
		__assert_fail("prod", "External/GameSpy/gcdkey/gcdkeys.c", 360, "__PRETTY_FUNCTION__.4412");

	node = &prod->clientq;
	while ((node = node->next) != 0)
	{
		gsclient_t* client = (gsclient_t*)node->object;
		if (client->localid == localid)
		{
			send_disconnect_req(prod, client);
			remove_from_queue(node, &prod->clientq);
			free_client_node(node);
			return;
		}
	}
}

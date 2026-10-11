// FUNCTION: BF2 0x815670
extern "C" char *value_for_key(const char *s, const char *key);
extern "C" long __strtol_internal(const char *nptr, char **endptr, int base, int group);
extern "C" char *strncpy(char *dest, const char *src, unsigned long n);
extern "C" char *goastrdup(const char *str);

struct gsclient_s {
	char pad0[0x28];
	int sesskey;          // 0x28
	char pad1[0x3c-0x2c];
	int state;            // 0x3c
	char pad2[0x58-0x40];
	char *errmsg;         // 0x58
};

extern "C" gsclient_s *find_client(const char *keyhash, int sesskey, int *error);

void process_oks(char *buf, int isok)
{
	int sesskey;
	char keyhash[33];
	gsclient_s *client;
	const char skey_t[] = {'s','k','e','y','\0'};
	const char cd_t[] = {'c','d','\0'};
	const char errmsg_t[] = {'e','r','r','m','s','g','\0'};

	sesskey = (int)__strtol_internal(value_for_key(buf, skey_t), 0, 10, 0);
	strncpy(keyhash, value_for_key(buf, cd_t), 32);
	keyhash[32] = 0;

	client = find_client(keyhash, sesskey, 0);
	if (!client)
		return;
	if (client->sesskey != sesskey)
		return;
	if (client->state == 3)
		return;
	if (isok)
		client->state = 1;
	else
	{
		client->state = 2;
		client->errmsg = goastrdup(value_for_key(buf, errmsg_t));
	}
}

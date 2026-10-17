// FUNCTION: BF2 0x8314f0
typedef int GPResult;
typedef int GPIBool;
struct _GPConnection;
typedef struct _GPConnection * GPConnection;
struct GPIInfoCache
{
	char * nick;
	char * uniquenick;
	char * email;
	char * firstname;
	char * lastname;
	char * homepage;
	char pad0[0xb0];
	char * aimname;
	char pad1[0x28];
};
struct GPIProfile
{
	int profileId;
	int userId;
	char pad0[8];
	GPIInfoCache * cache;
	void * authSig;
	int requestCount;
	char pad1[4];
	void * peerSig;
};
struct GPIConnection
{
	char pad0[0x100];
	int infoCaching;
};
extern "C" void * gsimalloc(unsigned int size);
extern "C" void * memcpy(void * dest, const void * src, unsigned long n);
extern "C" char * goastrdup(const char * str);
extern "C" void gpiFreeInfoCache(GPIProfile * profile);

// compile-state padding: 14 unused functions, see trick 378
extern "C" int __pad_0(int x) { int y = x * 0 + 3; return y; }
extern "C" int __pad_1(int x) { int y = x * 1 + 3; return y; }
extern "C" int __pad_2(int x) { int y = x * 2 + 3; return y; }
extern "C" int __pad_3(int x) { int y = x * 3 + 3; return y; }
extern "C" int __pad_4(int x) { int y = x * 4 + 3; return y; }
extern "C" int __pad_5(int x) { int y = x * 5 + 3; return y; }
extern "C" int __pad_6(int x) { int y = x * 6 + 3; return y; }
extern "C" int __pad_7(int x) { int y = x * 7 + 3; return y; }
extern "C" int __pad_8(int x) { int y = x * 8 + 3; return y; }
extern "C" int __pad_9(int x) { int y = x * 9 + 3; return y; }
extern "C" int __pad_10(int x) { int y = x * 10 + 3; return y; }
extern "C" int __pad_11(int x) { int y = x * 11 + 3; return y; }
extern "C" int __pad_12(int x) { int y = x * 12 + 3; return y; }
extern "C" int __pad_13(int x) { int y = x * 13 + 3; return y; }
GPIBool gpiSetInfoCache(GPConnection * connection, GPIProfile * profile, const GPIInfoCache * cache)
{
	GPIConnection * iconnection = (GPIConnection *)*connection;
	GPIBool result = 1;

	if(!iconnection->infoCaching)
		return result;

	gpiFreeInfoCache(profile);

	profile->cache = (GPIInfoCache *)gsimalloc(sizeof(GPIInfoCache));

	if(profile->cache)
	{
		*profile->cache = *cache;
		profile->cache->nick = goastrdup(cache->nick);
		profile->cache->uniquenick = goastrdup(cache->uniquenick);
		profile->cache->email = goastrdup(cache->email);
		profile->cache->firstname = goastrdup(cache->firstname);
		profile->cache->lastname = goastrdup(cache->lastname);
		profile->cache->homepage = goastrdup(cache->homepage);
		profile->cache->aimname = goastrdup(cache->aimname);
	}

	result = (profile->cache != 0);
	return result;
}

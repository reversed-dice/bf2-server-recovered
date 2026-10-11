// FUNCTION: BF2 0x832ec0
typedef int GPIBool;
typedef int GPResult;
typedef int GPProfile;
typedef int GPEnum;

struct _GPConnection;
typedef struct _GPConnection * GPConnection;

struct GPIOperation
{
	char pad0[0x28];
	int state;
	int id;
};

struct GPIPeer
{
	int state;
	char pad0[0x8];
	int profile;
};

typedef struct GPIPeer * GPIPeer_st;

extern "C" {
GPResult gpiAddOperation(GPConnection * connection, int type, const char * input, GPIOperation ** operation, GPEnum blocking, void * callback, void * param);
GPResult gpiSendGetInfo(GPConnection * connection, GPProfile profile, int id);
}

#define CHECK_RESULT(result) { GPResult __result__ = (result); if(__result__ != 0) return __result__; }

GPResult gpiPeerGetSig(GPConnection * connection, GPIPeer_st peer)
{
	GPIOperation * operation;

	CHECK_RESULT(gpiAddOperation(connection, 2, 0, &operation, 0, 0, 0));

	CHECK_RESULT(gpiSendGetInfo(connection, peer->profile, operation->id));

	peer->state = 0x65;

	return 0;
}

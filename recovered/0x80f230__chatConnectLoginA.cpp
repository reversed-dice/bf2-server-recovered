// FUNCTION: BF2 0x80f230
typedef void *CHAT;

extern "C" CHAT chatConnectDoit(int type, const char *serverAddress, int port,
	const char *authtoken, const char *partnerchallenge, const char *name,
	int namespaceID, const char *email, const char *profilenick,
	const char *uniquenick, const char *password, const char *cdkey,
	const char *setmodechallenge, const char *gamename, const char *secretKey,
	void *callbacks, void *nickErrorCallback, void *fillInUserCallback,
	void *connectCallback, void *param, int blocking);

enum { CIUniqueNickLogin = 1, CIProfileLogin = 2 };

CHAT chatConnectLoginA(const char * serverAddress,
				 int port,
				 int namespaceID,
				 const char * email,
				 const char * profilenick,
				 const char * uniquenick,
				 const char * password,
				 const char * name,
				 const char * gamename,
				 const char * secretKey,
				 void * callbacks,
				 void * nickErrorCallback,
				 void * fillInUserCallback,
				 void * connectCallback,
				 void * param,
				 int blocking)
{
	return chatConnectDoit((uniquenick && uniquenick[0])?CIUniqueNickLogin:CIProfileLogin,
		serverAddress,
		port,
		0,
		0,
		name,
		namespaceID,
		email,
		profilenick,
		uniquenick,
		password,
		0,
		0,
		gamename,
		secretKey,
		callbacks,
		nickErrorCallback,
		fillInUserCallback,
		connectCallback,
		param,
		blocking);
}

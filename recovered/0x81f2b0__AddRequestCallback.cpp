// FUNCTION: BF2 0x81f2b0
typedef enum {rt_authcb, rt_datacb, rt_savecb, rt_profilecb} reqtype_t;
typedef int persisttype_t;

typedef struct 
{
	reqtype_t reqtype;
	int localid;
	int profileid;
	persisttype_t pdtype;
	int pdindex;
	void *instance;
	void *callback;
} serverreq_t;

extern void *serverreqs;

extern "C" {
void *ArrayNew(int elemsize, int growby, void *freefn);
void ArrayAppend(void *array, const void *elem);
void AddRequestCallback(reqtype_t reqtype, int localid, int profileid, persisttype_t pdtype, int pdindex, void *callback, void *instance);
}

void AddRequestCallback(reqtype_t reqtype, int localid, int profileid, persisttype_t pdtype, int pdindex, void *callback, void *instance)
{
	serverreq_t req;
	
	req.callback = callback;
	req.instance = instance;
	req.localid = localid;
	req.reqtype = reqtype;
	req.profileid = profileid;
	req.pdtype = pdtype;
	req.pdindex = pdindex;
	if (serverreqs == 0)
	{
		serverreqs = ArrayNew(sizeof(serverreq_t), 2, 0);
	}
	ArrayAppend(serverreqs, &req);
}

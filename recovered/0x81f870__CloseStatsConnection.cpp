// FUNCTION: BF2 0x81f870
extern "C" int shutdown(int sock, int how);
extern "C" int close(int fd);
extern "C" void *gsifree(void *p);
extern "C" void xcode_buf(char *data, int len);
extern "C" int ArrayLength(void *array);
extern "C" void ArrayFree(void *array);
extern "C" void CallReqCallback(int reqindex, int success, long modified, char *data, int length);

int sock = -1;
void *serverreqs = 0;
char *rcvbuffer = 0;
int rcvmax = 0;
int rcvlen = 0;
char enc1[] = "GameSpy 3D";
char enc2[] = "Industries";
char enc3[] = "ProjectAphex";
char *enc = enc1;

static void ClosePendingCallbacks()
{
	int i;

	if (serverreqs == 0)
		return;
	for (i = ArrayLength(serverreqs) - 1 ; i >= 0 ; i--)
	{
		char connerror[] = "\x13\x1D\x1\x4\x0\x0\x0\x28\x1F\x6\x45\x34\x3F\x1\x1B";
		enc = enc3;
		xcode_buf(connerror, sizeof(connerror)-1);

		CallReqCallback(i,0,0,connerror,0);
	}
	ArrayFree(serverreqs);
	serverreqs = 0;
}

void CloseStatsConnection()
{
	if (sock != -1)
	{
		shutdown(sock,2);
		close(sock);
	}
	sock = -1;
	//call any pending callbacks with the data as lost
	ClosePendingCallbacks();
	if (rcvbuffer != 0)
	{
		gsifree(rcvbuffer);
		rcvbuffer = 0;
		rcvmax = 0;
		rcvlen = 0;
	}
}

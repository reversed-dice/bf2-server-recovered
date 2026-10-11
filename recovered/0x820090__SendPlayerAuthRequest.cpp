// FUNCTION: BF2 0x820090
extern "C" int DoSend(char *data, int len);
extern "C" void AddRequestCallback(int reqtype, int localid, int profileid, int pdtype, int pdindex, void *callback, void *instance);
extern "C" void xcode_buf(char *data, int len);

int sock = -1;
char enc1[] = "GameSpy 3D";
char enc2[] = "Industries";
char enc3[] = "ProjectAphex";
char *enc = enc1;

void CloseStatsConnection();

typedef void (*PersAuthCallbackFn)(int localid, int profileid, int success, char *data, void *instance);

void SendPlayerAuthRequest(char *data, int len, int localid, PersAuthCallbackFn callback, void *instance)
{
	int sentlen = 0;
	char connerror[] = "\x13\x1D\x1\x4\x0\x0\x0\x28\x1F\x6\x45\x34\x3F\x1\x1B";

	if (sock != -1)
		sentlen	= DoSend(data, len);

	/* If the send failed, close the socket */
	if (sentlen <= 0)
	{
		CloseStatsConnection();
		enc = enc3;
		xcode_buf(connerror, sizeof(connerror)-1);
		if (callback)
		{
			callback(localid, 0, 0, connerror, instance);
		}
	}
	else
	{ /* set up the callback */
		AddRequestCallback(0, localid, 0, 0, 0, (void*)callback, instance);
	}
}

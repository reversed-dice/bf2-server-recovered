// FUNCTION: BF2 0x81ff30
extern "C" int sprintf(char *str, const char *format, ...);
extern "C" void xcode_buf(char *data, int len);
extern "C" int DoSend(char *data, int len);
extern "C" void AddRequestCallback(int reqtype, int localid, int profileid, int pdtype, int pdindex, void *callback, void *instance);

int sock = -1;
char enc1[] = "GameSpy 3D";
char enc2[] = "Industries";
char enc3[] = "ProjectAphex";
char *enc = enc1;

void CloseStatsConnection();

typedef void (*ProfileCallbackFn)(int localid, int profileid, int success, void *instance);

void GetProfileIDFromCDA(int localid, const char *nick, const char *keyhash, ProfileCallbackFn callback, void *instance)
{
	char respformat[] = "\xC\x15\xA\x1E\x15\xA\x10\x1D\x2C\x6\xC\x1B\x3B\x2E\x4A\x19\x39\x8\x11\x38\x18\x9\x16\x10\xC\x57\x1C\x36\x9\xA\x10\x1D\x55\xC";
	int len;
	char data[512];
	enc = enc3;
	xcode_buf(respformat, sizeof(respformat)-1);
	len = sprintf(data, respformat, nick, keyhash, localid);

	if (sock != -1)
		len	= DoSend(data, len);

	if (len <= 0)
	{
		CloseStatsConnection();
		if (callback)
			callback(0,-1,0,instance);
	} else
	{
		AddRequestCallback(3, localid, 0, 0, 0, (void *)callback, instance);
	}
}

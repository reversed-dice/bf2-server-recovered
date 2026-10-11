// FUNCTION: BF2 0x8187a0
// BF2_FLAGS: -fcrossjumping
typedef int GHTTPBool;
typedef int GHTTPRequest;
typedef void (*ghttpProgressCallback)(GHTTPRequest request, int bytesReceived, int totalBytes, void * param);
typedef void (*ghttpCompletedCallback)(GHTTPRequest request, int result, void * param);

struct GHIConnection
{
	int inUse;
	int request;
	int uniqueID;
	int type;
	int state;
	int _pad0;
	char * URL;
	char * serverAddress;
	unsigned int serverIP;
	unsigned short serverPort;
	unsigned short _pad1;
	char * requestPath;
	int protocol;
	int _pad2;
	char * sendHeaders;
	void * saveFile;
	int blocking;
	int persistConnection;
	int result;
	int _pad3;
	ghttpProgressCallback progressCallback;
	ghttpCompletedCallback completedCallback;
	void * callbackParam;
	char _pad4[0x1c8 - 0x78];
	int throttle;
};

enum
{
	GHIGET,
	GHISAVE,
	GHISTREAM,
	GHIHEAD,
	GHIPOST
};

enum
{
	GHTTPInsufficientMemory = -1,
	GHTTPInvalidURL = -1
};

extern int ghiReferenceCount;

GHIConnection * ghiNewConnection(void);
GHTTPBool ghiFreeConnection(GHIConnection * connection);
GHTTPBool ghiProcessConnection(GHIConnection * connection);
char * goastrdup(const char * str);
void msleep(unsigned int ms);
void ghttpStartup(void);
void __assert_fail(const char * expr, const char * file, unsigned int line, const char * fn) __attribute__((noreturn));

GHTTPRequest pad0
(
	const char * URL,
	const char * headers,
	GHTTPBool throttle,
	GHTTPBool blocking,
	ghttpProgressCallback progressCallback,
	ghttpCompletedCallback completedCallback,
	void * param
)
{

	GHIConnection * connection;

	if (!(URL && URL[0]))
		__assert_fail("URL && URL[0]", "External/GameSpy/ghttp/ghttpMain.c", 738, "pad0");

	if(!URL || !URL[0])
		return GHTTPInvalidURL;

	if(!ghiReferenceCount)
		ghttpStartup();

	connection = ghiNewConnection();
	if(!connection)
		return GHTTPInsufficientMemory;

	connection->type = GHIHEAD;
	connection->URL = goastrdup(URL);
	if(!connection->URL)
	{
		ghiFreeConnection(connection);
		return GHTTPInsufficientMemory;
	}
	if(headers && *headers)
	{
		connection->sendHeaders = goastrdup(headers);
		if(!connection->sendHeaders)
		{
			ghiFreeConnection(connection);
			return GHTTPInsufficientMemory;
		}
	}
	connection->blocking = blocking;
	connection->progressCallback = progressCallback;
	connection->completedCallback = completedCallback;
	connection->callbackParam = param;
	connection->throttle = throttle;

	if(blocking)
	{
		while(!ghiProcessConnection(connection))
			msleep(10);

		return 0;
	}

	return connection->request;
}
GHTTPRequest pad1
(
	const char * URL,
	const char * headers,
	GHTTPBool throttle,
	GHTTPBool blocking,
	ghttpProgressCallback progressCallback,
	ghttpCompletedCallback completedCallback,
	void * param
)
{

	GHIConnection * connection;

	if (!(URL && URL[0]))
		__assert_fail("URL && URL[0]", "External/GameSpy/ghttp/ghttpMain.c", 738, "pad1");

	if(!URL || !URL[0])
		return GHTTPInvalidURL;

	if(!ghiReferenceCount)
		ghttpStartup();

	connection = ghiNewConnection();
	if(!connection)
		return GHTTPInsufficientMemory;

	connection->type = GHIHEAD;
	connection->URL = goastrdup(URL);
	if(!connection->URL)
	{
		ghiFreeConnection(connection);
		return GHTTPInsufficientMemory;
	}
	if(headers && *headers)
	{
		connection->sendHeaders = goastrdup(headers);
		if(!connection->sendHeaders)
		{
			ghiFreeConnection(connection);
			return GHTTPInsufficientMemory;
		}
	}
	connection->blocking = blocking;
	connection->progressCallback = progressCallback;
	connection->completedCallback = completedCallback;
	connection->callbackParam = param;
	connection->throttle = throttle;

	if(blocking)
	{
		while(!ghiProcessConnection(connection))
			msleep(10);

		return 0;
	}

	return connection->request;
}
GHTTPRequest pad2
(
	const char * URL,
	const char * headers,
	GHTTPBool throttle,
	GHTTPBool blocking,
	ghttpProgressCallback progressCallback,
	ghttpCompletedCallback completedCallback,
	void * param
)
{

	GHIConnection * connection;

	if (!(URL && URL[0]))
		__assert_fail("URL && URL[0]", "External/GameSpy/ghttp/ghttpMain.c", 738, "pad2");

	if(!URL || !URL[0])
		return GHTTPInvalidURL;

	if(!ghiReferenceCount)
		ghttpStartup();

	connection = ghiNewConnection();
	if(!connection)
		return GHTTPInsufficientMemory;

	connection->type = GHIHEAD;
	connection->URL = goastrdup(URL);
	if(!connection->URL)
	{
		ghiFreeConnection(connection);
		return GHTTPInsufficientMemory;
	}
	if(headers && *headers)
	{
		connection->sendHeaders = goastrdup(headers);
		if(!connection->sendHeaders)
		{
			ghiFreeConnection(connection);
			return GHTTPInsufficientMemory;
		}
	}
	connection->blocking = blocking;
	connection->progressCallback = progressCallback;
	connection->completedCallback = completedCallback;
	connection->callbackParam = param;
	connection->throttle = throttle;

	if(blocking)
	{
		while(!ghiProcessConnection(connection))
			msleep(10);

		return 0;
	}

	return connection->request;
}
GHTTPRequest pad3
(
	const char * URL,
	const char * headers,
	GHTTPBool throttle,
	GHTTPBool blocking,
	ghttpProgressCallback progressCallback,
	ghttpCompletedCallback completedCallback,
	void * param
)
{

	GHIConnection * connection;

	if (!(URL && URL[0]))
		__assert_fail("URL && URL[0]", "External/GameSpy/ghttp/ghttpMain.c", 738, "pad3");

	if(!URL || !URL[0])
		return GHTTPInvalidURL;

	if(!ghiReferenceCount)
		ghttpStartup();

	connection = ghiNewConnection();
	if(!connection)
		return GHTTPInsufficientMemory;

	connection->type = GHIHEAD;
	connection->URL = goastrdup(URL);
	if(!connection->URL)
	{
		ghiFreeConnection(connection);
		return GHTTPInsufficientMemory;
	}
	if(headers && *headers)
	{
		connection->sendHeaders = goastrdup(headers);
		if(!connection->sendHeaders)
		{
			ghiFreeConnection(connection);
			return GHTTPInsufficientMemory;
		}
	}
	connection->blocking = blocking;
	connection->progressCallback = progressCallback;
	connection->completedCallback = completedCallback;
	connection->callbackParam = param;
	connection->throttle = throttle;

	if(blocking)
	{
		while(!ghiProcessConnection(connection))
			msleep(10);

		return 0;
	}

	return connection->request;
}
GHTTPRequest pad4
(
	const char * URL,
	const char * headers,
	GHTTPBool throttle,
	GHTTPBool blocking,
	ghttpProgressCallback progressCallback,
	ghttpCompletedCallback completedCallback,
	void * param
)
{

	GHIConnection * connection;

	if (!(URL && URL[0]))
		__assert_fail("URL && URL[0]", "External/GameSpy/ghttp/ghttpMain.c", 738, "pad4");

	if(!URL || !URL[0])
		return GHTTPInvalidURL;

	if(!ghiReferenceCount)
		ghttpStartup();

	connection = ghiNewConnection();
	if(!connection)
		return GHTTPInsufficientMemory;

	connection->type = GHIHEAD;
	connection->URL = goastrdup(URL);
	if(!connection->URL)
	{
		ghiFreeConnection(connection);
		return GHTTPInsufficientMemory;
	}
	if(headers && *headers)
	{
		connection->sendHeaders = goastrdup(headers);
		if(!connection->sendHeaders)
		{
			ghiFreeConnection(connection);
			return GHTTPInsufficientMemory;
		}
	}
	connection->blocking = blocking;
	connection->progressCallback = progressCallback;
	connection->completedCallback = completedCallback;
	connection->callbackParam = param;
	connection->throttle = throttle;

	if(blocking)
	{
		while(!ghiProcessConnection(connection))
			msleep(10);

		return 0;
	}

	return connection->request;
}
GHTTPRequest pad5
(
	const char * URL,
	const char * headers,
	GHTTPBool throttle,
	GHTTPBool blocking,
	ghttpProgressCallback progressCallback,
	ghttpCompletedCallback completedCallback,
	void * param
)
{

	GHIConnection * connection;

	if (!(URL && URL[0]))
		__assert_fail("URL && URL[0]", "External/GameSpy/ghttp/ghttpMain.c", 738, "pad5");

	if(!URL || !URL[0])
		return GHTTPInvalidURL;

	if(!ghiReferenceCount)
		ghttpStartup();

	connection = ghiNewConnection();
	if(!connection)
		return GHTTPInsufficientMemory;

	connection->type = GHIHEAD;
	connection->URL = goastrdup(URL);
	if(!connection->URL)
	{
		ghiFreeConnection(connection);
		return GHTTPInsufficientMemory;
	}
	if(headers && *headers)
	{
		connection->sendHeaders = goastrdup(headers);
		if(!connection->sendHeaders)
		{
			ghiFreeConnection(connection);
			return GHTTPInsufficientMemory;
		}
	}
	connection->blocking = blocking;
	connection->progressCallback = progressCallback;
	connection->completedCallback = completedCallback;
	connection->callbackParam = param;
	connection->throttle = throttle;

	if(blocking)
	{
		while(!ghiProcessConnection(connection))
			msleep(10);

		return 0;
	}

	return connection->request;
}
GHTTPRequest pad6
(
	const char * URL,
	const char * headers,
	GHTTPBool throttle,
	GHTTPBool blocking,
	ghttpProgressCallback progressCallback,
	ghttpCompletedCallback completedCallback,
	void * param
)
{

	GHIConnection * connection;

	if (!(URL && URL[0]))
		__assert_fail("URL && URL[0]", "External/GameSpy/ghttp/ghttpMain.c", 738, "pad6");

	if(!URL || !URL[0])
		return GHTTPInvalidURL;

	if(!ghiReferenceCount)
		ghttpStartup();

	connection = ghiNewConnection();
	if(!connection)
		return GHTTPInsufficientMemory;

	connection->type = GHIHEAD;
	connection->URL = goastrdup(URL);
	if(!connection->URL)
	{
		ghiFreeConnection(connection);
		return GHTTPInsufficientMemory;
	}
	if(headers && *headers)
	{
		connection->sendHeaders = goastrdup(headers);
		if(!connection->sendHeaders)
		{
			ghiFreeConnection(connection);
			return GHTTPInsufficientMemory;
		}
	}
	connection->blocking = blocking;
	connection->progressCallback = progressCallback;
	connection->completedCallback = completedCallback;
	connection->callbackParam = param;
	connection->throttle = throttle;

	if(blocking)
	{
		while(!ghiProcessConnection(connection))
			msleep(10);

		return 0;
	}

	return connection->request;
}
GHTTPRequest ghttpHeadExA
(
	const char * URL,
	const char * headers,
	GHTTPBool throttle,
	GHTTPBool blocking,
	ghttpProgressCallback progressCallback,
	ghttpCompletedCallback completedCallback,
	void * param
)
{
	GHIConnection * connection;

	if (!(URL && URL[0]))
		__assert_fail("URL && URL[0]", "External/GameSpy/ghttp/ghttpMain.c", 738, "ghttpHeadExA");

	if(!URL || !URL[0])
		return GHTTPInvalidURL;

	if(!ghiReferenceCount)
		ghttpStartup();

	connection = ghiNewConnection();
	if(!connection)
		return GHTTPInsufficientMemory;

	connection->type = GHIHEAD;
	connection->URL = goastrdup(URL);
	if(!connection->URL)
	{
		ghiFreeConnection(connection);
		return GHTTPInsufficientMemory;
	}
	if(headers && *headers)
	{
		connection->sendHeaders = goastrdup(headers);
		if(!connection->sendHeaders)
		{
			ghiFreeConnection(connection);
			return GHTTPInsufficientMemory;
		}
	}
	connection->blocking = blocking;
	connection->progressCallback = progressCallback;
	connection->completedCallback = completedCallback;
	connection->callbackParam = param;
	connection->throttle = throttle;

	if(blocking)
	{
		while(!ghiProcessConnection(connection))
			msleep(10);

		return 0;
	}

	return connection->request;
}

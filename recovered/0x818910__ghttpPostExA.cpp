// FUNCTION: BF2 0x818910
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
	char _pad4[0x140 - 0x78];
	char getFileBuffer[0x30];
	int userBufferSupplied;
	char _pad5[0x1c8 - 0x174];
	int throttle;
	int _pad6;
	void * post;
	char _pad7[8];
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
	GHTTPFalse = 0,
	GHTTPTrue = 1,
	GHTTPInsufficientMemory = -1,
	GHTTPInvalidURL = -1,
	GHTTPInvalidBufferSize = -1,
	GHTTPInvalidFileName = -1,
	GHTTPFailedToOpenFile = -1,
	GHTTPInvalidPost = -1,
	GHTTPUnspecifiedError = -1
};

#define GET_FILE_BUFFER_INITIAL_SIZE 2048
#define GET_FILE_BUFFER_INCREMENT_SIZE 2048

extern int ghiReferenceCount;

GHIConnection * ghiNewConnection(void);
GHTTPBool ghiFreeConnection(GHIConnection * connection);
GHTTPBool ghiProcessConnection(GHIConnection * connection);
GHTTPBool ghiInitFixedBuffer(GHIConnection * connection, void * buffer, char * userBuffer, int size);
GHTTPBool ghiInitBuffer(GHIConnection * connection, void * buffer, int initialSize, int incrementSize);
GHTTPBool ghiPostInitState(GHIConnection * connection);
char * goastrdup(const char * str);
void msleep(unsigned int ms);
void ghttpStartup(void);
extern "C" void * fopen(const char * filename, const char * mode);
void __assert_fail(const char * expr, const char * file, unsigned int line, const char * fn) __attribute__((noreturn));

// FUNCTION: BF2 0x818910
GHTTPRequest pad0

(
	const char * URL,
	const char * headers,
	void * post,
	GHTTPBool throttle,
	GHTTPBool blocking,
	ghttpProgressCallback progressCallback,
	ghttpCompletedCallback completedCallback,
	void * param
)
{
	GHIConnection * connection;

	if (!(URL && URL[0]))
		__assert_fail("URL && URL[0]", "External/GameSpy/ghttp/ghttpMain.c", 859, "pad0");
	if (!(post))
		__assert_fail("post", "External/GameSpy/ghttp/ghttpMain.c", 860, "pad0");

	if(!URL || !URL[0])
		return GHTTPInvalidURL;
	if(!post)
		return GHTTPInvalidPost;

	if(!ghiReferenceCount)
		ghttpStartup();

	connection = ghiNewConnection();
	if(!connection)
		return GHTTPInsufficientMemory;

	connection->type = GHIPOST;
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
	connection->post = post;
	connection->blocking = blocking;
	connection->progressCallback = progressCallback;
	connection->completedCallback = completedCallback;
	connection->callbackParam = param;
	connection->throttle = throttle;

	if(post && !ghiPostInitState(connection))
	{
		ghiFreeConnection(connection);
		return GHTTPInvalidPost;
	}

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
	void * post,
	GHTTPBool throttle,
	GHTTPBool blocking,
	ghttpProgressCallback progressCallback,
	ghttpCompletedCallback completedCallback,
	void * param
)
{
	GHIConnection * connection;

	if (!(URL && URL[0]))
		__assert_fail("URL && URL[0]", "External/GameSpy/ghttp/ghttpMain.c", 859, "pad1");
	if (!(post))
		__assert_fail("post", "External/GameSpy/ghttp/ghttpMain.c", 860, "pad1");

	if(!URL || !URL[0])
		return GHTTPInvalidURL;
	if(!post)
		return GHTTPInvalidPost;

	if(!ghiReferenceCount)
		ghttpStartup();

	connection = ghiNewConnection();
	if(!connection)
		return GHTTPInsufficientMemory;

	connection->type = GHIPOST;
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
	connection->post = post;
	connection->blocking = blocking;
	connection->progressCallback = progressCallback;
	connection->completedCallback = completedCallback;
	connection->callbackParam = param;
	connection->throttle = throttle;

	if(post && !ghiPostInitState(connection))
	{
		ghiFreeConnection(connection);
		return GHTTPInvalidPost;
	}

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
	void * post,
	GHTTPBool throttle,
	GHTTPBool blocking,
	ghttpProgressCallback progressCallback,
	ghttpCompletedCallback completedCallback,
	void * param
)
{
	GHIConnection * connection;

	if (!(URL && URL[0]))
		__assert_fail("URL && URL[0]", "External/GameSpy/ghttp/ghttpMain.c", 859, "pad2");
	if (!(post))
		__assert_fail("post", "External/GameSpy/ghttp/ghttpMain.c", 860, "pad2");

	if(!URL || !URL[0])
		return GHTTPInvalidURL;
	if(!post)
		return GHTTPInvalidPost;

	if(!ghiReferenceCount)
		ghttpStartup();

	connection = ghiNewConnection();
	if(!connection)
		return GHTTPInsufficientMemory;

	connection->type = GHIPOST;
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
	connection->post = post;
	connection->blocking = blocking;
	connection->progressCallback = progressCallback;
	connection->completedCallback = completedCallback;
	connection->callbackParam = param;
	connection->throttle = throttle;

	if(post && !ghiPostInitState(connection))
	{
		ghiFreeConnection(connection);
		return GHTTPInvalidPost;
	}

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
	void * post,
	GHTTPBool throttle,
	GHTTPBool blocking,
	ghttpProgressCallback progressCallback,
	ghttpCompletedCallback completedCallback,
	void * param
)
{
	GHIConnection * connection;

	if (!(URL && URL[0]))
		__assert_fail("URL && URL[0]", "External/GameSpy/ghttp/ghttpMain.c", 859, "pad3");
	if (!(post))
		__assert_fail("post", "External/GameSpy/ghttp/ghttpMain.c", 860, "pad3");

	if(!URL || !URL[0])
		return GHTTPInvalidURL;
	if(!post)
		return GHTTPInvalidPost;

	if(!ghiReferenceCount)
		ghttpStartup();

	connection = ghiNewConnection();
	if(!connection)
		return GHTTPInsufficientMemory;

	connection->type = GHIPOST;
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
	connection->post = post;
	connection->blocking = blocking;
	connection->progressCallback = progressCallback;
	connection->completedCallback = completedCallback;
	connection->callbackParam = param;
	connection->throttle = throttle;

	if(post && !ghiPostInitState(connection))
	{
		ghiFreeConnection(connection);
		return GHTTPInvalidPost;
	}

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
	void * post,
	GHTTPBool throttle,
	GHTTPBool blocking,
	ghttpProgressCallback progressCallback,
	ghttpCompletedCallback completedCallback,
	void * param
)
{
	GHIConnection * connection;

	if (!(URL && URL[0]))
		__assert_fail("URL && URL[0]", "External/GameSpy/ghttp/ghttpMain.c", 859, "pad4");
	if (!(post))
		__assert_fail("post", "External/GameSpy/ghttp/ghttpMain.c", 860, "pad4");

	if(!URL || !URL[0])
		return GHTTPInvalidURL;
	if(!post)
		return GHTTPInvalidPost;

	if(!ghiReferenceCount)
		ghttpStartup();

	connection = ghiNewConnection();
	if(!connection)
		return GHTTPInsufficientMemory;

	connection->type = GHIPOST;
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
	connection->post = post;
	connection->blocking = blocking;
	connection->progressCallback = progressCallback;
	connection->completedCallback = completedCallback;
	connection->callbackParam = param;
	connection->throttle = throttle;

	if(post && !ghiPostInitState(connection))
	{
		ghiFreeConnection(connection);
		return GHTTPInvalidPost;
	}

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
	void * post,
	GHTTPBool throttle,
	GHTTPBool blocking,
	ghttpProgressCallback progressCallback,
	ghttpCompletedCallback completedCallback,
	void * param
)
{
	GHIConnection * connection;

	if (!(URL && URL[0]))
		__assert_fail("URL && URL[0]", "External/GameSpy/ghttp/ghttpMain.c", 859, "pad5");
	if (!(post))
		__assert_fail("post", "External/GameSpy/ghttp/ghttpMain.c", 860, "pad5");

	if(!URL || !URL[0])
		return GHTTPInvalidURL;
	if(!post)
		return GHTTPInvalidPost;

	if(!ghiReferenceCount)
		ghttpStartup();

	connection = ghiNewConnection();
	if(!connection)
		return GHTTPInsufficientMemory;

	connection->type = GHIPOST;
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
	connection->post = post;
	connection->blocking = blocking;
	connection->progressCallback = progressCallback;
	connection->completedCallback = completedCallback;
	connection->callbackParam = param;
	connection->throttle = throttle;

	if(post && !ghiPostInitState(connection))
	{
		ghiFreeConnection(connection);
		return GHTTPInvalidPost;
	}

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
	void * post,
	GHTTPBool throttle,
	GHTTPBool blocking,
	ghttpProgressCallback progressCallback,
	ghttpCompletedCallback completedCallback,
	void * param
)
{
	GHIConnection * connection;

	if (!(URL && URL[0]))
		__assert_fail("URL && URL[0]", "External/GameSpy/ghttp/ghttpMain.c", 859, "pad6");
	if (!(post))
		__assert_fail("post", "External/GameSpy/ghttp/ghttpMain.c", 860, "pad6");

	if(!URL || !URL[0])
		return GHTTPInvalidURL;
	if(!post)
		return GHTTPInvalidPost;

	if(!ghiReferenceCount)
		ghttpStartup();

	connection = ghiNewConnection();
	if(!connection)
		return GHTTPInsufficientMemory;

	connection->type = GHIPOST;
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
	connection->post = post;
	connection->blocking = blocking;
	connection->progressCallback = progressCallback;
	connection->completedCallback = completedCallback;
	connection->callbackParam = param;
	connection->throttle = throttle;

	if(post && !ghiPostInitState(connection))
	{
		ghiFreeConnection(connection);
		return GHTTPInvalidPost;
	}

	if(blocking)
	{
		while(!ghiProcessConnection(connection))
			msleep(10);

		return 0;
	}

	return connection->request;
}
GHTTPRequest pad7

(
	const char * URL,
	const char * headers,
	void * post,
	GHTTPBool throttle,
	GHTTPBool blocking,
	ghttpProgressCallback progressCallback,
	ghttpCompletedCallback completedCallback,
	void * param
)
{
	GHIConnection * connection;

	if (!(URL && URL[0]))
		__assert_fail("URL && URL[0]", "External/GameSpy/ghttp/ghttpMain.c", 859, "pad7");
	if (!(post))
		__assert_fail("post", "External/GameSpy/ghttp/ghttpMain.c", 860, "pad7");

	if(!URL || !URL[0])
		return GHTTPInvalidURL;
	if(!post)
		return GHTTPInvalidPost;

	if(!ghiReferenceCount)
		ghttpStartup();

	connection = ghiNewConnection();
	if(!connection)
		return GHTTPInsufficientMemory;

	connection->type = GHIPOST;
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
	connection->post = post;
	connection->blocking = blocking;
	connection->progressCallback = progressCallback;
	connection->completedCallback = completedCallback;
	connection->callbackParam = param;
	connection->throttle = throttle;

	if(post && !ghiPostInitState(connection))
	{
		ghiFreeConnection(connection);
		return GHTTPInvalidPost;
	}

	if(blocking)
	{
		while(!ghiProcessConnection(connection))
			msleep(10);

		return 0;
	}

	return connection->request;
}
GHTTPRequest ghttpPostExA
(
	const char * URL,
	const char * headers,
	void * post,
	GHTTPBool throttle,
	GHTTPBool blocking,
	ghttpProgressCallback progressCallback,
	ghttpCompletedCallback completedCallback,
	void * param
)
{
	GHIConnection * connection;

	if (!(URL && URL[0]))
		__assert_fail("URL && URL[0]", "External/GameSpy/ghttp/ghttpMain.c", 859, "ghttpPostExA");
	if (!(post))
		__assert_fail("post", "External/GameSpy/ghttp/ghttpMain.c", 860, "ghttpPostExA");

	if(!URL || !URL[0])
		return GHTTPInvalidURL;
	if(!post)
		return GHTTPInvalidPost;

	if(!ghiReferenceCount)
		ghttpStartup();

	connection = ghiNewConnection();
	if(!connection)
		return GHTTPInsufficientMemory;

	connection->type = GHIPOST;
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
	connection->post = post;
	connection->blocking = blocking;
	connection->progressCallback = progressCallback;
	connection->completedCallback = completedCallback;
	connection->callbackParam = param;
	connection->throttle = throttle;

	if(post && !ghiPostInitState(connection))
	{
		ghiFreeConnection(connection);
		return GHTTPInvalidPost;
	}

	if(blocking)
	{
		while(!ghiProcessConnection(connection))
			msleep(10);

		return 0;
	}

	return connection->request;
}

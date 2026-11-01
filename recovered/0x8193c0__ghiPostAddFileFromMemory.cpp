// from api 96.83%
// FUNCTION: BF2 0x8193c0
// upstream GameSpy/ghttp/ghttpPost.c ghiPostAddFileFromMemory
#include <cstring>
#include <cstdlib>
#include <cstdio>
#define GS_ASSERT(x)
#define GSI_UNUSED(x)
#define assert(x)
#define GS_STATIC_CALLBACK
#define GSI_STATIC_CALLBACK
#define GS_STATIC_FN
typedef void (*ArrayElementFreeFn)(void *elem);
struct DArrayImplementation { int count, capacity; int elemsize; int growby; ArrayElementFreeFn elemfreefn; void *list; };
typedef enum { GHIString, GHIFileDisk, GHIFileMemory, GHIXmlData } GHIPostDataType;
typedef struct GHIPostFileDiskData { char * filename; char * reportFilename; char * contentType; } GHIPostFileDiskData;
typedef struct GHIPostFileMemoryData { const char * buffer; int len; char * reportFilename; char * contentType; } GHIPostFileMemoryData;
typedef enum { GHTTPFalse, GHTTPTrue } GHTTPBool;
typedef int GHTTPRequest;
typedef void* GSXmlStreamWriter;
typedef void (* ghttpPostCallback) ( GHTTPRequest request, int bytesPosted, int totalBytes, int objectsPosted, int totalObjects, void * param );
#define gsifree free
typedef struct DArrayImplementation *DArray;
typedef struct GHIPost { DArray data; ghttpPostCallback callback; void * param; GHTTPBool hasFiles; GHTTPBool hasSoap; GHTTPBool useDIME; GHTTPBool autoFree; } GHIPost;
typedef struct GHIPostStringData { char * string; int len; GHTTPBool invalidChars; int extendedChars; } GHIPostStringData;
typedef struct GHIPostXmlData { GSXmlStreamWriter xml; } GHIPostXmlData;
typedef struct GHIPost * GHTTPPost;
typedef struct GHIPostData { GHIPostDataType type; char * name; union { GHIPostStringData string; GHIPostFileDiskData fileDisk; GHIPostFileMemoryData fileMemory; GHIPostXmlData xml; } data; } GHIPostData;
extern "C" {
void ArrayAppend(DArray array, const void *newElem);
char * goastrdup(const char *src);
void gsifree(void*);
}

GHTTPBool ghiPostAddFileFromMemory
(
	GHTTPPost _post,
	const char * name,
	const char * buffer,
	int bufferLen,
	const char * reportFilename,
	const char * contentType
)
{
	GHIPost * post = (GHIPost *)_post;
	GHIPostData data;

	// Copy the strings.
	////////////////////
	name = goastrdup(name);
	reportFilename = goastrdup(reportFilename);
	contentType = goastrdup(contentType);
	if(!name || !reportFilename || !contentType)
	{
		gsifree((char *)name);
		gsifree((char *)reportFilename);
		gsifree((char *)contentType);
		return GHTTPFalse;
	}

	// Set it.
	//////////
	memset(&data, 0, sizeof(GHIPostData));
	data.type = GHIFileMemory;
	data.name = (char *)name;
	data.data.fileMemory.buffer = (char *)buffer;
	data.data.fileMemory.len = bufferLen;
	data.data.fileMemory.reportFilename = (char *)reportFilename;
	data.data.fileMemory.contentType = (char *)contentType;

	// Add it.
	//////////
	ArrayAppend(post->data, &data);

	// We have a file.
	//////////////////
	post->hasFiles = GHTTPTrue;

	return GHTTPTrue;
}

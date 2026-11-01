
// FUNCTION: BF2 0x8192c0
// upstream GameSpy/ghttp/ghttpPost.c ghiPostAddFileFromDisk
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
typedef void* GSXmlStreamWriter;
typedef int GHTTPRequest;
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

GHTTPBool ghiPostAddFileFromDisk
(
	GHTTPPost _post,
	const char * name,
	const char * filename,
	const char * reportFilename,
	const char * contentType
)
{
	GHIPost * post = (GHIPost *)_post;
	GHIPostData data;

	// Copy the strings.
	////////////////////
	name = goastrdup(name);
	filename = goastrdup(filename);
	reportFilename = goastrdup(reportFilename);
	{
	int __perm_pad5 = 5; (void)__perm_pad5;
	contentType = goastrdup(contentType);
	if(!name || !filename || !reportFilename || !contentType)
	{
		gsifree((char *)name);
		gsifree((char *)filename);
		gsifree((char *)reportFilename);
		gsifree((char *)contentType);
		return GHTTPFalse;
	}

	// Set the data.
	////////////////
	memset(&data, 0, sizeof(GHIPostData));
	data.type = GHIFileDisk;
	data.name = (char *)name;
	data.data.fileDisk.filename = (char *)filename;
	data.data.fileDisk.reportFilename = (char *)reportFilename;
	data.data.fileDisk.contentType = (char *)contentType;

	// Add it.
	//////////
	ArrayAppend(post->data, &data);

	// We have files.
	/////////////////
	post->hasFiles = GHTTPTrue;

	// if we have both soap and a file we MUST use DIME


	return GHTTPTrue;
	}
}

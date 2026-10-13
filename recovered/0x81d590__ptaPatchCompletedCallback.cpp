// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x81d590
// upstream GameSpy/pt/ptMain.c ptaPatchCompletedCallback
#include <cstring>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#define GS_ASSERT(x)
#define GSI_UNUSED(x)
#define assert(x)
#define GS_STATIC_CALLBACK
#define GSI_STATIC_CALLBACK
#define GS_STATIC_FN
typedef enum { GHTTPFalse, GHTTPTrue } GHTTPBool;
typedef int GHTTPRequest;
typedef enum { GHTTPSuccess, GHTTPOutOfMemory, GHTTPBufferOverflow, GHTTPParseURLFailed, GHTTPHostLookupFailed, GHTTPSocketFailed, GHTTPConnectFailed, GHTTPBadResponse, GHTTPRequestRejected, GHTTPUnauthorized, GHTTPForbidden, GHTTPFileNotFound, GHTTPServerError, GHTTPFileWriteFailed, GHTTPFileReadFailed, GHTTPFileIncomplete, GHTTPFileToBig, GHTTPEncryptionError, GHTTPRequestCancelled } GHTTPResult;
#define PTA_MAX_STRING_SIZE 256
typedef int PTBool;
#define PTTrue 1
#define URL NULL
#define gsi_char char
typedef signed long gsi_i64;
typedef void (* ptPatchCallback) ( PTBool available, PTBool mandatory, const gsi_char * versionName, int fileID, const gsi_char * downloadURL, void * param );
typedef struct ptaPatchData { ptPatchCallback callback; void * param; } ptaPatchData;
typedef gsi_i64 GHTTPByteCount;
extern "C" {
long __strtol_internal(const char* nptr, char** endptr, int base, int group);
void ptaCallPatchCallback(ptaPatchData * data, PTBool available, PTBool mandatory, const char * versionName, int fileID, const char * downloadURL);
const char * ptaGetKeyValue(const char * buffer, const char * key);
GHTTPBool ptaPatchFailed(ptaPatchData * data);
}

extern "C" GHTTPBool ptaPatchCompletedCallback(
	GHTTPRequest request,
	GHTTPResult result,
	char * buffer,
	GHTTPByteCount bufferLen,
	void * param
)
{
	ptaPatchData * data = (ptaPatchData *)param;
	const char * value;
	PTBool mandatory;
	int fileID;
	char versionName[256];
	char downloadURL[256];

	GSI_UNUSED(bufferLen);
	GSI_UNUSED(request);

	// Check for success.
	/////////////////////
	if(result != GHTTPSuccess)
		return ptaPatchFailed(data);

	// Check for a patch.
	/////////////////////
	value = ptaGetKeyValue(buffer, "\\newver\\");
	if(!value || (int)__strtol_internal(value, 0, 10, 0) == 0)
		return ptaPatchFailed(data);

	// Check the mandatory flag.
	////////////////////////////
	value = ptaGetKeyValue(buffer, "\\lockout\\");
	mandatory = (value && ((int)__strtol_internal(value, 0, 10, 0) != 0));

	// Get the file id.
	///////////////////
	value = ptaGetKeyValue(buffer, "\\fpfileid\\");
	if(value)
		fileID = (int)__strtol_internal(value, 0, 10, 0);
	else
		fileID = 0;

	// Get the name.
	////////////////
	value = ptaGetKeyValue(buffer, "\\newvername\\");
	if(value)
	{
		strncpy(versionName, value, sizeof(versionName));
		versionName[sizeof(versionName) - 1] = '\0';
	}
	else
		versionName[0] = '\0';

	// Get the URL.
	///////////////
	value = ptaGetKeyValue(buffer, "\\dlurl\\");
	if(value)
	{
		strncpy(downloadURL, value, sizeof(downloadURL));
		downloadURL[sizeof(downloadURL) - 1] = '\0';
	}
	else
		downloadURL[0] = '\0';

	// Call the callback.
	/////////////////////
	ptaCallPatchCallback(data, PTTrue, mandatory, versionName, fileID, downloadURL);

	return GHTTPTrue;
}

// FUNCTION: BF2 0x818ec0
typedef int GHTTPBool;
typedef void* GHTTPPost;
#define GHTTPFalse 0
#define GHTTPTrue 1

extern "C" void __assert_fail(const char* assertion, const char* file, unsigned int line, const char* function) __attribute__((noreturn));
extern "C" GHTTPBool ghiPostAddFileFromMemory(GHTTPPost post, const char* name, const char* buffer, int bufferLen, const char* reportFilename, const char* contentType);

GHTTPBool ghttpPostAddFileFromMemoryA(GHTTPPost post, const char* name, const char* buffer, int bufferLen, const char* reportFilename, const char* contentType)
{
	if (!(post))
		__assert_fail("post", "External/GameSpy/ghttp/ghttpMain.c", 1376, __PRETTY_FUNCTION__);
	if (!(name && name[0]))
		__assert_fail("name && name[0]", "External/GameSpy/ghttp/ghttpMain.c", 1377, __PRETTY_FUNCTION__);
	if (!(bufferLen >= 0))
		__assert_fail("bufferLen >= 0", "External/GameSpy/ghttp/ghttpMain.c", 1378, __PRETTY_FUNCTION__);
	if (!(reportFilename && reportFilename[0]))
		__assert_fail("reportFilename && reportFilename[0]", "External/GameSpy/ghttp/ghttpMain.c", 1383, __PRETTY_FUNCTION__);

	if (!post)
		return GHTTPFalse;
	if (!name || !name[0])
		return GHTTPFalse;
	if (bufferLen < 0)
		return GHTTPFalse;
	if (!bufferLen && !buffer)
		return GHTTPFalse;
	if (!contentType)
		contentType = "application/octet-stream";

	return ghiPostAddFileFromMemory(post, name, buffer, bufferLen, reportFilename, contentType);
}

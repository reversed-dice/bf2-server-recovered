// FUNCTION: BF2 0x818e20
extern "C" void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((noreturn));

typedef int GHTTPBool;
typedef void *GHTTPPost;

GHTTPBool ghiPostAddFileFromDisk(GHTTPPost post, const char *name, const char *filename, const char *reportFilename, const char *contentType);

GHTTPBool ghttpPostAddFileFromDiskA(GHTTPPost post, const char *name, const char *filename, const char *reportFilename, const char *contentType)
{
	if (!post)
		__assert_fail("post", "External/GameSpy/ghttp/ghttpMain.c", 0x52f, "ghttpPostAddFileFromDiskA");
	if (!name || !name[0])
		__assert_fail("name && name[0]", "External/GameSpy/ghttp/ghttpMain.c", 0x530, "ghttpPostAddFileFromDiskA");
	if (!filename || !filename[0])
		__assert_fail("filename && filename[0]", "External/GameSpy/ghttp/ghttpMain.c", 0x531, "ghttpPostAddFileFromDiskA");

	if(!reportFilename || !reportFilename[0])
		reportFilename = filename;
	if(!contentType)
		contentType = "application/octet-stream";

	return ghiPostAddFileFromDisk(post, name, filename, reportFilename, contentType);
}

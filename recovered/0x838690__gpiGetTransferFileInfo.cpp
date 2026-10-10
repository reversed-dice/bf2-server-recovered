// FUNCTION: BF2 0x838690
// upstream GameSpy/GP/gpiTransfer.c gpiGetTransferFileInfo
#include <cstring>
#include <cstdlib>
#include <cstdio>
#define GS_ASSERT(x)
#define GSI_UNUSED(x)
#define assert(x)
#define GS_STATIC_CALLBACK
#define GSI_STATIC_CALLBACK
#define GS_STATIC_FN
typedef enum _GPIBool { GPIFalse, GPITrue } GPIBool;
typedef unsigned int gsi_time;
extern "C" {
int _fileno(...);
int _fstat(...);
}

GPIBool gpiGetTransferFileInfo
(
  FILE * file,
  int * size,
  gsi_time * modTime
)
{
#ifdef _WIN32
	struct _stat stats;

	if(_fstat(_fileno(file), &stats) != 0)
		return GPIFalse;

	*size = (int)stats.st_size;
	*modTime = (gsi_time)stats.st_mtime;
#else
	if(fseek(file, 0, SEEK_END) != 0)
		return GPIFalse;

	*size = (int)ftell(file);
	if(*size == -1)
		return GPIFalse;

	*modTime = 0;

	fseek(file, 0, SEEK_SET);
#endif

	return GPITrue;
}

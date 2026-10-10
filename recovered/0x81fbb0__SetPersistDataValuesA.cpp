// FUNCTION: BF2 0x81fbb0
#include <string.h>
typedef int persisttype_t;
typedef void (*PersDataSaveCallbackFn)(int, int, persisttype_t, int, const char *, void *);
extern "C" void SetPersistDataHelper(int localid, int profileid, persisttype_t type, int index, const char * data, int len, PersDataSaveCallbackFn callback, void * instance, int kvset);
extern "C" void SetPersistDataValuesA(int localid, int profileid, persisttype_t type, int index, const char * keyvalues, PersDataSaveCallbackFn callback, void * instance)
{
	SetPersistDataHelper(localid, profileid, type, index, keyvalues, (int)strlen(keyvalues) + 1, callback, instance, 1);
}

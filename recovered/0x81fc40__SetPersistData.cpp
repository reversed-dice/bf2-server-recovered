// FUNCTION: BF2 0x81fc40
typedef int persisttype_t;
typedef void (*PersDataSaveCallbackFn)(int, int, persisttype_t, int, const char *, void *);
extern "C" void SetPersistDataHelper(int localid, int profileid, persisttype_t type, int index, const char *data, int len, PersDataSaveCallbackFn callback, void *instance, int kvset);
extern "C" void SetPersistData(int localid, int profileid, persisttype_t type, int index, const char *data, int len, PersDataSaveCallbackFn callback, void *instance)
{
	SetPersistDataHelper(localid, profileid, type, index,  data, len, callback, instance, 0);
}

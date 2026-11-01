// FUNCTION: BF2 0x834990
typedef struct GPIConnection GPIConnection;
typedef struct GPIProfile GPIProfile;

struct GPIConnection {
	char pad0[0x4a8];
	void* operationList;
	void* profileTable;
};

typedef void (*gpiProfileMapFunc)(GPIConnection ** connection, GPIProfile * profile, void * data);

struct gpiProfileMapData
{
	GPIConnection ** connection;
	gpiProfileMapFunc func;
	void * data;
};

int gpiProfileMapCallback(GPIConnection ** connection, GPIProfile * profile, void * data);
void * TableMapSafe2(void * table, int (* fn)(GPIConnection **, GPIProfile *, void *), void * data);

int gpiProfileMap(GPIConnection ** connection, gpiProfileMapFunc func, void * data)
{
	gpiProfileMapData mapData;

	*(GPIConnection** volatile*)&mapData.connection = connection;
	*(gpiProfileMapFunc volatile*)&mapData.func = func;
	*(void* volatile*)&mapData.data = data;

	return !TableMapSafe2(*(void* volatile*)((char*)*connection + 0x4b0), gpiProfileMapCallback, &mapData);
}

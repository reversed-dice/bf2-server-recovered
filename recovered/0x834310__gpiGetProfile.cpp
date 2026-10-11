// FUNCTION: BF2 0x834310
typedef int GPIBool;
typedef int GPResult;
typedef int GPProfile;

struct _GPConnection;
typedef struct _GPConnection * GPConnection;

struct GPIProfile
{
	int profileId;
	int userId;
	void * buddyStatus;
	void * buddyStatusInfo;
	void * cache;
	char * authSig;
	int requestCount;
};

struct GPIConnection
{
	char pad0[0x108];
	int simulation;
	char pad1[0x3a4];
	void * profileTable;
	char pad2[0x50];
	void * transfers;
};

extern "C" void * TableLookup(void * table, const void * key);

GPIBool gpiGetProfile(GPConnection * connection, GPProfile profileid, GPIProfile ** pProfile)
{
	GPIProfile * profile;
	GPIConnection * iconnection = (GPIConnection *)*connection;
	GPIProfile profileTemp;

	profileTemp.profileId = profileid;
	profile = (GPIProfile *)TableLookup(iconnection->profileTable, &profileTemp);
	if(pProfile)
		*pProfile = profile;

	return ((profile != 0) ? 1 : 0);
}

// FUNCTION: BF2 0x82d5e0
typedef int GPResult;
typedef int GPBool;

struct GPIOutputBuffer
{
	char* data;
	int size;
	int len;
	int pos;
};

struct GPIConnection
{
	unsigned char pad0[0x108];
	int simulation;
	unsigned char pad1[0x198 - 0x10c];
	int sessKey;
	unsigned char pad2[0x23c - 0x19c];
	int connectState;
	unsigned char pad3[0x268 - 0x240];
	GPIOutputBuffer outputBuffer;
	unsigned char pad4[0x4bc - 0x280];
	int numBuddies;
};

struct GPIBuddyList
{
	int index;
	int pad;
	char* data;
	char* info;
};

struct GPIProfile
{
	unsigned int profileId;
	int pad;
	GPIBuddyList* buddyList;
};

extern "C" {
void __assert_fail(const char*, const char*, unsigned int, const char*) __attribute__((noreturn));
int gpiGetProfile(void** connection, int profile, GPIProfile** profilep);
int gpiSetErrorString(void* connection, const char* string);
void gsifree(void* ptr);
int gpiCanFreeProfile(GPIProfile* profile);
void gpiFixBuddyIndices(void);
void gpiProfileMap(void** connection, void* func, void* data);
void gpiRemoveProfile(void** connection, GPIProfile* profile);
void gpiAppendStringToBuffer(void* connection, GPIOutputBuffer* buffer, const char* string);
void gpiAppendIntToBuffer(void* connection, GPIOutputBuffer* buffer, int value);
}

GPResult gpiDeleteBuddy(void** connection, int profile, GPBool delBuddies)
{
	GPIConnection* iconnection = (GPIConnection*)*connection;
	GPIProfile* pProfile;
	int index;

	if (!gpiGetProfile(connection, profile, &pProfile))
	{
		gpiSetErrorString(connection, "Invalid profile.");
		return 2;
	}

	if (delBuddies == 1)
	{
		gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\delbuddy\\");
		gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\sesskey\\");
		gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, iconnection->sessKey);
		gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\delprofileid\\");
		gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, pProfile->profileId);
		gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\final\\");
	}

	if (pProfile->buddyList)
	{
		index = pProfile->buddyList->index;
		if (index < 0)
			__assert_fail("index >= 0", "External/GameSpy/gp/gpiBuddy.c", 585, "gpiDeleteBuddy");

		gsifree(pProfile->buddyList->data);
		pProfile->buddyList->data = 0;
		gsifree(pProfile->buddyList->info);
		pProfile->buddyList->info = 0;
		gsifree(pProfile->buddyList);
		pProfile->buddyList = 0;

		if (gpiCanFreeProfile(pProfile))
			gpiRemoveProfile(connection, pProfile);

		iconnection->numBuddies--;
		if (iconnection->numBuddies < 0)
			__assert_fail("iconnection->profileList.numBuddies >= 0", "External/GameSpy/gp/gpiBuddy.c", 592, "gpiDeleteBuddy");

		gpiProfileMap(connection, (void*)gpiFixBuddyIndices, (void*)index);
	}

	return 0;
}

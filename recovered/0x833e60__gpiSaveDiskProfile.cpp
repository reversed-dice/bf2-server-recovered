// FUNCTION: BF2 0x833e60
typedef int GPIBool;

struct _GPConnection;
typedef struct _GPConnection * GPConnection;

typedef void FILE;

struct GPIInfoCache
{
	char* nick;
	char* uniquenick;
	char* email;
	char* firstname;
	char* lastname;
	char* homepage;
	int icquin;
	char zipcode[11];
	char countrycode[3];
	float longitude;
	float latitude;
	char place[128];
	int birthday;
	int birthmonth;
	int birthyear;
	int sex;
	int publicmask;
	char* aimname;
	int pic;
	int occupationid;
	int industryid;
	int incomeid;
	int marriedid;
	int childcount;
	int interests1;
	int ownership1;
	int conntypeid;
};

struct GPIProfile
{
	int profileId;
	int userId;
	char pad0[8];
	GPIInfoCache * cache;
};

struct GPIConnection
{
	char pad0[0x4a0];
	FILE * diskCache;
};

extern "C" {
int fprintf(FILE * stream, const char * format, ...);
unsigned long fwrite(const void * ptr, unsigned long size, unsigned long nmemb, FILE * stream);
int fputc(int c, FILE * stream);
}

GPIBool gpiSaveDiskProfile(GPConnection * connection, GPIProfile * profile, void * data)
{
	FILE * fp;
	GPIConnection * iconnection = (GPIConnection *)*connection;

	fp = iconnection->diskCache;

	fprintf(fp, "[%d]\n", profile->profileId);

	if(profile->userId != 0)
		fprintf(fp, "userid=%d\n", profile->userId);

	if(profile->cache)
	{
		fprintf(fp, "valid=1\n");

		fprintf(fp, "nick=%s\n", profile->cache->nick);
		fprintf(fp, "uniquenick=%s\n", profile->cache->uniquenick);
		fprintf(fp, "email=%s\n", profile->cache->email);
		fprintf(fp, "firstname=%s\n", profile->cache->firstname);
		fprintf(fp, "lastname=%s\n", profile->cache->lastname);
		fprintf(fp, "homepage=%s\n", profile->cache->homepage);
		fprintf(fp, "icquin=%d\n", profile->cache->icquin);
		fprintf(fp, "zipcode=%s\n", profile->cache->zipcode);
		fprintf(fp, "countrycode=%s\n", profile->cache->countrycode);
		fprintf(fp, "birthday=%d\n", profile->cache->birthday);
		fprintf(fp, "birthmonth=%d\n", profile->cache->birthmonth);
		fprintf(fp, "birthyear=%d\n", profile->cache->birthyear);
		if(profile->cache->sex == 0x500)
			fprintf(fp, "sex=Male\n");
		if(profile->cache->sex == 0x501)
			fprintf(fp, "sex=Female\n");
		if(profile->cache->sex == 0x502)
			fprintf(fp, "sex=Pat\n");
		fprintf(fp, "publicmask=%d\n", profile->cache->publicmask);
		fprintf(fp, "aimname=%s\n", profile->cache->aimname);
		fprintf(fp, "pic=%d\n", profile->cache->pic);
		fprintf(fp, "occupationid=%d\n", profile->cache->occupationid);
		fprintf(fp, "industryid=%d\n", profile->cache->industryid);
		fprintf(fp, "incomeid=%d\n", profile->cache->incomeid);
		fprintf(fp, "marriedid=%d\n", profile->cache->marriedid);
		fprintf(fp, "childcount=%d\n", profile->cache->childcount);
		fprintf(fp, "interests1=%d\n", profile->cache->interests1);
		fprintf(fp, "ownership1=%d\n", profile->cache->ownership1);
		fprintf(fp, "conntypeid=%d\n", profile->cache->conntypeid);
	}

	fprintf(fp, "\n");

	(void)data;

	return 1;
}

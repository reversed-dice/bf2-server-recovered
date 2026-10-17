// FUNCTION: BF2 0x82f7d0
typedef int GPResult;
struct _GPConnection;
typedef struct _GPConnection * GPConnection;
struct GPIProfileSub
{
	void * m_0;
	void * m_8;
	void * m_10;
};
struct GPIProfile
{
	void * m_0;
	struct GPIProfileSub * m_8;
	void * m_10;
	void * m_18;
	int m_20;
	void * m_28;
};
struct GPIConnection
{
	char pad0[0x104];
	int m_104;
};
extern "C" void gsifree(void * p);
extern "C" void gpiRemoveProfile(GPConnection * connection, GPIProfile * profile);

// compile-state padding: 13 unused functions, see trick 378
extern "C" int __pad_0(int x) { int y = x * 0 + 3; return y; }
extern "C" int __pad_1(int x) { int y = x * 1 + 3; return y; }
extern "C" int __pad_2(int x) { int y = x * 2 + 3; return y; }
extern "C" int __pad_3(int x) { int y = x * 3 + 3; return y; }
extern "C" int __pad_4(int x) { int y = x * 4 + 3; return y; }
extern "C" int __pad_5(int x) { int y = x * 5 + 3; return y; }
extern "C" int __pad_6(int x) { int y = x * 6 + 3; return y; }
extern "C" int __pad_7(int x) { int y = x * 7 + 3; return y; }
extern "C" int __pad_8(int x) { int y = x * 8 + 3; return y; }
extern "C" int __pad_9(int x) { int y = x * 9 + 3; return y; }
extern "C" int __pad_10(int x) { int y = x * 10 + 3; return y; }
extern "C" int __pad_11(int x) { int y = x * 11 + 3; return y; }
extern "C" int __pad_12(int x) { int y = x * 12 + 3; return y; }
int gpiDisconnectCleanupProfile(GPConnection * connection, GPIProfile * profile)
{
	GPIConnection * conn = (GPIConnection *)*connection;

	if((profile->m_8 != 0) && (conn->m_104 == 0))
	{
		gsifree(profile->m_8->m_8);
		profile->m_8->m_8 = 0;
		gsifree(profile->m_8->m_10);
		profile->m_8->m_10 = 0;
		gsifree(profile->m_8);
		profile->m_8 = 0;
	}

	gsifree(profile->m_18);
	profile->m_18 = 0;
	gsifree(profile->m_28);
	profile->m_28 = 0;
	profile->m_20 = 0;

	if((profile->m_10 != 0) && ((conn->m_104 != 1) || (profile->m_8 != 0)))
		return 1;

	gpiRemoveProfile(connection, profile);
	return 0;
}

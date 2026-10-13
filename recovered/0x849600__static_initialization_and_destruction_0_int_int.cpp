// FUNCTION: BF2 0x849600
#include <cstring>

struct PunkBusterServer
{
	void* field_0x00;
	void* field_0x08;
	void* field_0x10;
	char pad_0x18[0x10];
	char name[18];
	char pad_0x3a[0x112];
	int field_0x14c;
	void* fields[9];
	int field_0x1a8;
	int pad_end;

	PunkBusterServer()
		: field_0x00((void*)0x357afe20)
	{
		__builtin_memcpy(name, "PunkBuster Server", 18);
		field_0x10 = 0;
		field_0x14c = 1;
		field_0x1a8 = 999;
		fields[0] = 0;
		fields[1] = 0;
		fields[2] = 0;
		fields[3] = 0;
		fields[4] = 0;
		fields[5] = 0;
		fields[6] = 0;
		fields[7] = 0;
		fields[8] = 0;
		field_0x08 = 0;
	}
	~PunkBusterServer();
};

PunkBusterServer pbsv;

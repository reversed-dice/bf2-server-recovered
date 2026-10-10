// FUNCTION: BF2 0x81eee0
#include <stdio.h>
extern "C" void create_challenge(int challenge, char* chstr)
{
	char *p = chstr;
	sprintf(chstr, "%08x",challenge);

	while (*p != 0)
	{
		*p = (char)((*p) + ('A' - '0') + (p-chstr));
		p++;
	}
}

// FUNCTION: BF2 0x820b80
#include <stdio.h>
extern "C" int GetTeamIndex(void * game, int index);
extern "C" int ServerOpInt(void * game, char * name, void * func, int value, int index);
extern "C" int TeamOpInt(void * game, char * name, void * func, int value, int index)
{
	char fullname[64];
	sprintf(fullname, "%s_t%d",name, GetTeamIndex(game, index));
	return ServerOpInt(game, fullname, func, value, index);
}

// FUNCTION: BF2 0x820cc0
#include <stdio.h>
extern "C" int GetTeamIndex(void * game, int index);
extern "C" char * ServerOpString(void * game, char * name, void * func, char * value, int index);
extern "C" char * TeamOpString(void * game, char * name, void * func, char * value, int index)
{
	char fullname[64];
	sprintf(fullname, "%s_t%d",name, GetTeamIndex(game, index));
	return ServerOpString(game, fullname, func, value, index);
}

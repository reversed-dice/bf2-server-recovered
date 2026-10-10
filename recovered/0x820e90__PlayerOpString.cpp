// FUNCTION: BF2 0x820e90
#include <stdio.h>
extern "C" int GetPlayerIndex(void * game, int index);
extern "C" char * ServerOpString(void * game, char * name, void * func, char * value, int index);
extern "C" char * PlayerOpString(void * game, char * name, void * func, char * value, int index)
{
	char fullname[64];
	sprintf(fullname, "%s_%d",name, GetPlayerIndex(game, index));
	return ServerOpString(game, fullname, func, value, index);
}

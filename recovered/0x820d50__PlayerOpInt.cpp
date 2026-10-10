// FUNCTION: BF2 0x820d50
#include <stdio.h>
extern "C" int GetPlayerIndex(void * game, int index);
extern "C" int ServerOpInt(void * game, char * name, void * func, int value, int index);
extern "C" int PlayerOpInt(void * game, char * name, void * func, int value, int index)
{
	char fullname[64];
	sprintf(fullname, "%s_%d",name, GetPlayerIndex(game, index));
	return ServerOpInt(game, fullname, func, value, index);
}

#include <cstddef>

extern "C" void* dice_hfe_game;
typedef long (*vfn)(long);
extern "C" long eom_a83280(char* self)
{
    if (*(int*)(self+0x30)==0){*(char*)(self+0x108)=0;((vfn)(*(void***)dice_hfe_game)[0x188/8])((long)(dice_hfe_game));}
    return 0;
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass592_executeObjectMethod (0xa83280)
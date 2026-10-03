#include <cstddef>

extern "C" void* dice_hfe_world_objectManager;
typedef long (*vfn)(long);
extern "C" long eom_abb540(char* self)
{
    if (*(int*)(self+0x30)==0){*(char*)(self+0x108)=0;((vfn)(*(void***)dice_hfe_world_objectManager)[0x138/8])((long)(dice_hfe_world_objectManager));}
    return 0;
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass27_executeObjectMethod (0xabb540)
#include <cstddef>

extern "C" void* dice_hfe_world_heightmapCluster;
typedef long (*vfn)(long);
extern "C" long eom_af6f60(char* self)
{
    if (*(int*)(self+0x30)==0){*(char*)(self+0x108)=0;((vfn)(*(void***)dice_hfe_world_heightmapCluster)[0x148/8])((long)(dice_hfe_world_heightmapCluster));}
    return 0;
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass150_executeObjectMethod (0xaf6f60)
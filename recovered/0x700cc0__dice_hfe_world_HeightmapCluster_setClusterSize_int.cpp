// FUNCTION: BF2 0x700cc0
#include <cstring>
void* operator new[](unsigned long);
extern "C" void setClusterSize_700cc0(char* param_1, unsigned int param_2) {
    *(unsigned int*)(param_1 + 0x28) = param_2;
    if (!(param_2 & 1)) {
        *(unsigned int*)(param_1 + 0x28) = param_2 + 1;
    }
    int sz = *(int*)(param_1 + 0x28) * *(int*)(param_1 + 0x28);
    void* p = operator new[]((long)sz << 3);
    *(void**)(param_1 + 0x30) = p;
    sz = *(int*)(param_1 + 0x28) * *(int*)(param_1 + 0x28);
    memset(p, 0, (long)sz << 3);
}
// REVERSED_FUNCTION: dice_hfe_world_HeightmapCluster_setClusterSize_int (0x700cc0)

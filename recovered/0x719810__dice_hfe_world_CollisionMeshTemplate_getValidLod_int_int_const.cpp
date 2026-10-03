// FUNCTION: BF2 0x719810
namespace dice { namespace hfe { namespace world {

class CollisionMeshTemplate {
public:
    void* getValidLod(int param_2, int param_3) const;
};

void* CollisionMeshTemplate::getValidLod(int param_2, int param_3) const
{
    typedef long long i64;
    char* base = *(char**)((char*)this + 8);
    i64 small = (i64)param_2 << 4;
    i64 big = param_2;
    big <<= 6;
    char* plVar4 = base + (big - small);
    int iVar1 = *(int*)(plVar4 + (i64)param_3 * 4 + 0x18);
    void** begin = *(void***)plVar4;
    void** end = *(void***)(plVar4 + 8);
    int iVar2 = (int)(((i64)end - (i64)begin) >> 3);
    if (iVar1 >= iVar2) {
        iVar1 = iVar2 - 1;
    }
    i64 lVar3 = 0;
    if (iVar1 >= 0) {
        lVar3 = iVar1;
    }
    return begin[lVar3];
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_CollisionMeshTemplate_getValidLod_int_int_const (0x719810)

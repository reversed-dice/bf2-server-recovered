// FUNCTION: BF2 0x71c750
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace world {

class Vec3 { public: float x, y, z; };

struct Lod { char pad[0x18]; Vec3* begin; Vec3* end; };

class CollisionMeshTemplate {
public:
    void* getValidLod(int lod, int sub) const;
    int getVertexCount(int lod, int sub) const;
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

int CollisionMeshTemplate::getVertexCount(int a, int b) const {
    Lod* lod = (Lod*)getValidLod(a, b);
    return (int)(lod->end - lod->begin);
}
} } }

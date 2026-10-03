// FUNCTION: BF2 0x526a30
namespace dice { namespace hfe { namespace world {
// 0x526a30 getHighestUnlockLevel
extern "C" void findTemplateChildsOfType_0x526950(void*, void*, unsigned int, unsigned int);
extern "C" unsigned int CID_ItemContainerTemplate;  // 0x00c7cf7c
extern "C" void operator_delete(void*);
typedef void* (*vfn2)(void*, unsigned int);
struct Vec3q { void* p0; void* p1; void* p2; };
int getHighestUnlockLevel_0x526a30(void* self) {
    Vec3q v;
    v.p0 = 0; v.p1 = 0; v.p2 = 0;
    findTemplateChildsOfType_0x526950((char*)self + 0x1d8, &v, CID_ItemContainerTemplate, 0);
    int r = 0;
    void** it = (void**)v.p0;
    while (it != (void**)v.p1) {
        void* obj = *it;
        void* t = ((vfn2*)*(void***)obj)[0xa0/8](obj, CID_ItemContainerTemplate);
        int lvl = *(int*)((char*)t + 0x210);
        r = r < lvl ? lvl : r;
        it++;
    }
    if (v.p0) operator_delete(v.p0);
    return r;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_KitTemplate_getHighestUnlockLevel (0x526a30)

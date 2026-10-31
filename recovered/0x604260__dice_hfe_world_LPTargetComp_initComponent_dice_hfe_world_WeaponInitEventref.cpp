// FUNCTION: BF2 0x604260
// dice::hfe::world::LPTargetComp::initComponent(dice::hfe::world::WeaponInitEvent&)
#include <string>
#include <ostream>

extern char DAT_00bb25f1;

struct Debug_604260 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_604260(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_604260();
};

struct VVec3 {
    float x, y, z;
    VVec3() { x = 0; y = 0; z = 0; }
};

extern void base_initComponent_608b20(void* self, void* ev);
extern void* LPTargetCompTemplate_getTargetObjectTemplate_6038b0(void* self);
extern void TargetObject_setTargetActive_55f9b0(void* self, bool active, bool force);

void initComponent_0x604260(void* self, void* ev)
{
    if (((bool (*)(void*))(*(void***)*(void**)0x010b8c08)[0x278 / 8])(*(void**)0x010b8c08)) {
        void* tot =
            LPTargetCompTemplate_getTargetObjectTemplate_6038b0(*(void**)((char*)self + 0x98));
        void* obj;
        if (tot) {
            if (*(int*)((char*)tot + 0x1f4) == 3) {
                obj = ((void* (*)(void*))(*(void***)tot)[0xa8 / 8])(tot);
                if (obj)
                    ((void (*)(void*))(*(void***)obj)[0x40 / 8])(obj);
            } else {
                typedef void* (*FnCreate)(void*, void*, const VVec3&, const VVec3&, bool, int,
                                          int);
                FnCreate create = (FnCreate)(*(void***)*(void**)0x010c5420)[0xf0 / 8];
                obj = create(*(void**)0x010c5420, tot, VVec3(), VVec3(), 1, 0, 0);
                if (obj && *(int*)((char*)*(void**)((char*)self + 0x98) + 0x54) == 2)
                    TargetObject_setTargetActive_55f9b0(obj, false, true);
            }

            if (!obj)
                Debug_604260(6, std::string("Game/Objects/Weapons/TargetComponents/LPTargetComp.cpp"),
                             0x56, std::string(&DAT_00bb25f1))
                        .os
                    << "TBM: unable to create TargetObject";

            *(void**)((char*)self + 0x90) = obj;
        } else {
            Debug_604260(6, std::string("Game/Objects/Weapons/TargetComponents/LPTargetComp.cpp"),
                         0x5e, std::string(&DAT_00bb25f1))
                    .os
                << "TBM: unable to create TargetObject";
        }
    }

    base_initComponent_608b20(self, ev);
}

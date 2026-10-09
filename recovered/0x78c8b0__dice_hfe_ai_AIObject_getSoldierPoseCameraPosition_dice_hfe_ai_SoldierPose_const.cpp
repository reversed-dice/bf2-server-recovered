// FUNCTION: BF2 0x78c8b0
namespace dice { namespace hfe { namespace world { extern int CID_SoldierTemplate; } } }

namespace dice { namespace hfe { namespace ai {

typedef void* (*VF0)(void*);
typedef void (*VF1)(void*, int);
typedef float (*VF2)(void*, int);

float getSoldierPoseCameraPosition_0x78c8b0(void* self, int pose) {
    void* obj = ((VF0*)(*(void***)self))[8](self);
    void* sub = *(void**)((char*)obj + 0x28);
    ((VF1*)(*(void***)sub))[20](sub, dice::hfe::world::CID_SoldierTemplate);
    int p = 4;
    switch (pose) {
    case 1: p = 0; break;
    case 2: p = 1; break;
    case 3: p = 2; break;
    }
    return ((VF2*)(*(void***)obj))[163](obj, p);
}

} } }

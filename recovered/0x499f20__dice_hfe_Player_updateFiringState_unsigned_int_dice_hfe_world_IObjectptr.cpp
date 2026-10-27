// FUNCTION: BF2 0x499f20
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// dice::hfe::Player::updateFiringState(unsigned int, dice::hfe::world::IObject*)

namespace dice { namespace hfe { namespace world {

class IObject;

extern unsigned IID_IWeaponObject;
extern unsigned IID_IPlayerControlObject;

} } }

namespace dice { namespace hfe {

class Player {
public:
    char _pad[0x228];
    void* getWeaponVehicle();
    void updateFiringState(unsigned int mask, dice::hfe::world::IObject* obj);
};

} }

namespace dice { namespace hfe {

void Player::updateFiringState(unsigned int mask, dice::hfe::world::IObject* obj)
{
    void* pc;
    if (obj != 0) {
        for (;;) {
            pc = (*(void* (**)(void*, unsigned))(*(void***)obj + 3))(
                obj, dice::hfe::world::IID_IPlayerControlObject);
            if (pc != 0) break;
            obj = *(dice::hfe::world::IObject**)((char*)obj + 0x50);
            if (obj == 0) break;
        }
    } else {
        pc = getWeaponVehicle();
    }
    if (pc == 0) {
        *(long*)((char*)this + 0x224) = 0;
        *(int*)((char*)this + 0x22c) = 0;
        return;
    }
    void* wv = pc;
    char* base = (char*)this;
    for (int i = 0; i != 3; ++i, base += 4) {
        if (!(mask & (1 << i))) continue;
        void* wi;
        void* wo = (*(void* (**)(void*, int))(*(void***)wv + 28))(wv, i);
        if (wo == 0
            || (wi = (*(void* (**)(void*, unsigned))(*(void***)wo + 3))(
                    wo, dice::hfe::world::IID_IWeaponObject)) == 0
            || (((unsigned char*)wo)[8] & 1)) {
            ((char*)this + i)[0x220] = 0;
            *(int*)(base + 0x224) = 0;
        } else {
            ((char*)this + i)[0x220] = 1;
            *(int*)(base + 0x224) =
                (*(int (**)(void*, int))(*(void***)wi + 0x25))(wi, 0);
            int a = (*(int (**)(void*))(*(void***)wi + 0x26))(wi);
            if (a != -1) a = (*(int (**)(void*))(*(void***)wi + 0x28))(wi);
            *(int*)(base + 0x254) = a;
            *(int*)(base + 0x23c) = (*(int (**)(void*))(*(void***)wi + 5))(wi);
            *(int*)(base + 0x248) =
                (*(int (**)(void*))(*(void***)wi + 0x42))(wi);
            *(int*)(base + 0x278) =
                (*(int (**)(void*))(*(void***)wi + 0x47))(wi);
            *(float*)(base + 0x26c) =
                (*(float (**)(void*))(*(void***)wi + 9))(wi);
            *(int*)(base + 0x260) =
                (*(int (**)(void*))(*(void***)wi + 0x26))(wi);
            *(int*)(base + 0x230) =
                (*(int (**)(void*))(*(void***)wi + 0x2a))(wi);
            if (*(int*)(base + 0x254) > *(int*)(base + 0x260))
                *(int*)(base + 0x254) = *(int*)(base + 0x260);
        }
    }
}

} }

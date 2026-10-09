// FUNCTION: BF2 0x4989c0
// BF2_FLAGS: -fno-tree-loop-optimize
namespace dice { namespace hfe { namespace world { extern unsigned IID_IWeaponObject; } } }
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x228];
    void* getWeaponVehicle();
    void forceSetClientAmmo(unsigned int v);
};
void Player::forceSetClientAmmo(unsigned int v)
{
    void* veh = (*(void* (**)(void*))(*(void***)this + 0x12))(this);
    if (veh == 0) {
        *(long*)((char*)this + 0x224) = 0;
        *(int*)((char*)this + 0x22c) = 0;
        return;
    }
    void* wv = getWeaponVehicle();
    if (wv == 0) return;
    char* b = (char*)this;
    for (int i = 0; i != 3; ++i, b += 4) {
        int sh = 1 << i;
        unsigned int vv = v;
        if (vv & sh) {
            void* wo = (*(void* (**)(void*, unsigned))(*(void***)wv + 0x1c))(wv, i);
            if (wo != 0) {
                void* wi = (*(void* (**)(void*, unsigned))(*(void***)wo + 3))(wo, dice::hfe::world::IID_IWeaponObject);
                if (wi != 0) {
                    int info[6];
                    info[0] = *(int*)(b + 0x224);
                    info[1] = *(int*)(b + 0x23c);
                    info[2] = *(int*)(b + 0x254);
                    info[3] = *(int*)(b + 0x248);
                    info[4] = *(int*)(b + 0x278);
                    info[5] = *(int*)(b + 0x26c);
                    (*(void (**)(void*, void*))(*(void***)wi + 0x18))(wi, info);
                }
            }
        }
    }
}
} }

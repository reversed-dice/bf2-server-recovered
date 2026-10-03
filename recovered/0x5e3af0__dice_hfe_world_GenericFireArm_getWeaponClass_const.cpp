// FUNCTION: BF2 0x5e3af0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x330];
    void* m_p;
    unsigned int get() { return *(unsigned int*)((char*)m_p + 0x258); }
};
unsigned int f_816(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_getWeaponClass_const (0x5e3af0)

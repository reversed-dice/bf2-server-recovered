// FUNCTION: BF2 0x791600
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x18];
    void* m_p;
    unsigned int get() { return *(unsigned int*)((char*)m_p + 0x68); }
};
unsigned int f_24(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_WeaponObject_getWeaponType_const (0x791600)

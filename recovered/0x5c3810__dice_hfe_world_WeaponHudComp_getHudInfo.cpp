// FUNCTION: BF2 0x5c3810
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x10];
    void* m_p;
    void* get() { return (char*)m_p + 0x28; }
};
void* f_16(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_WeaponHudComp_getHudInfo (0x5c3810)

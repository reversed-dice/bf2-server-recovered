// FUNCTION: BF2 0x5bba80
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x10];
    void* m_p;
    void set(unsigned char v) { *(unsigned char*)((char*)m_p + 0x89) = v; }
};
void f_16(Accessor* p, unsigned char v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_HelpHudComp_setAltIsActive_bool (0x5bba80)

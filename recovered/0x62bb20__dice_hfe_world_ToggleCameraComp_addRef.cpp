// FUNCTION: BF2 0x62bb20
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x30];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_48(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ToggleCameraComp_addRef (48)

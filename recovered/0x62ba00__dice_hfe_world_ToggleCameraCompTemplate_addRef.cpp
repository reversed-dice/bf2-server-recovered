// FUNCTION: BF2 0x62ba00
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x18];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_24(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ToggleCameraCompTemplate_addRef (24)

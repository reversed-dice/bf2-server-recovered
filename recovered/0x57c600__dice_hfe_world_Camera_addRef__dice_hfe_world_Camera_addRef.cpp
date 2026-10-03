// FUNCTION: BF2 0x57c600
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x2c8];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_712(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Camera_addRef (712)

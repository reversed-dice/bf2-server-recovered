// FUNCTION: BF2 0x464c20
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x90];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_144(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_GameServer_addRef (144)

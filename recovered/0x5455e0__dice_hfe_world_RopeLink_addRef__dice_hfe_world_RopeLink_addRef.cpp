// FUNCTION: BF2 0x5455e0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x22c];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_556(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_RopeLink_addRef (556)

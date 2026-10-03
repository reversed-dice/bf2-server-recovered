// FUNCTION: BF2 0x5248d0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x240];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_576(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Item_addRef (576)

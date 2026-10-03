// FUNCTION: BF2 0x415750
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x68];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x415750(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_Game_getCurrentChannel__dice_hfe_Game_getCurrentChannel (0x415750)

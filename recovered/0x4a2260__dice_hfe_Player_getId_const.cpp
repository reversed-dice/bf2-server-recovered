// FUNCTION: BF2 0x4a2260
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xd4];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x4a2260(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_Player_getId_const (0x4a2260)

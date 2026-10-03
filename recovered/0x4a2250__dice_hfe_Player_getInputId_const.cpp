// FUNCTION: BF2 0x4a2250
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xd0];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x4a2250(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_Player_getInputId_const (0x4a2250)

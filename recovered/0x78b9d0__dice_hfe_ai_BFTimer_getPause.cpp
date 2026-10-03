// FUNCTION: BF2 0x78b9d0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x8];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x78b9d0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_BFTimer_getPause (0x78b9d0)

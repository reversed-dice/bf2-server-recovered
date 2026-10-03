// FUNCTION: BF2 0x8259d0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x14];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x8259d0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: SBServerGetState (0x8259d0)

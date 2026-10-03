// FUNCTION: BF2 0x8259e0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x15];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x8259e0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: SBServerGetFlags (0x8259e0)

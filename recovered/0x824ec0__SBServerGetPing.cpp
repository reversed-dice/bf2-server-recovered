// FUNCTION: BF2 0x824ec0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x20];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x824ec0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: SBServerGetPing (0x824ec0)

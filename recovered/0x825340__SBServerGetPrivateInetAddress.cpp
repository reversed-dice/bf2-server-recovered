// FUNCTION: BF2 0x825340
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x8];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x825340(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: SBServerGetPrivateInetAddress (0x825340)

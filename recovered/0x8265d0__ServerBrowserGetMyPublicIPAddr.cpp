// FUNCTION: BF2 0x8265d0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xb34];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x8265d0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: ServerBrowserGetMyPublicIPAddr (0x8265d0)

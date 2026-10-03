// FUNCTION: BF2 0x827f80
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xad0];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x827f80(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: SBLastListErrorA (0x827f80)

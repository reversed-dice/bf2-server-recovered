// FUNCTION: BF2 0x8190d0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1c];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x8190d0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: ghiIsPostAutoFree (0x8190d0)

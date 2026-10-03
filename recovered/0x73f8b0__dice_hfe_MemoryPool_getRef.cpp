// FUNCTION: BF2 0x73f8b0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x8];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x73f8b0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_MemoryPool_getRef (0x73f8b0)

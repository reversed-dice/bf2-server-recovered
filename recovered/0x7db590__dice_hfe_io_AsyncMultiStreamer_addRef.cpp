// FUNCTION: BF2 0x7db590
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x8];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_8(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_AsyncMultiStreamer_addRef (8)

// re-trigger validate

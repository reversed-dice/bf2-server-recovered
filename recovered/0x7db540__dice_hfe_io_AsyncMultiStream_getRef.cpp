// FUNCTION: BF2 0x7db540
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x8];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x7db540(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_AsyncMultiStream_getRef (0x7db540)

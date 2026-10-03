// FUNCTION: BF2 0x7e5280
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x24];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x7e5280(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_MemStream_getMaxSize (0x7e5280)

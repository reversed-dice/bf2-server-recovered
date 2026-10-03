// FUNCTION: BF2 0x7e5240
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x20];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x7e5240(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_MemStream_getSize (0x7e5240)

// FUNCTION: BF2 0x7e5700
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x8];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x7e5700(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_DummySyncResult_unsigned_int_getRef (0x7e5700)

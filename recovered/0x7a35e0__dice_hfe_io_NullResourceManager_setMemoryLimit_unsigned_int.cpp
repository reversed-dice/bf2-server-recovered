// FUNCTION: BF2 0x7a35e0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xc];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x7a35e0(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_NullResourceManager_setMemoryLimit_unsigned_int (0x7a35e0)

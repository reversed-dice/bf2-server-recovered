// FUNCTION: BF2 0x7c4640
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xc];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_12(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_NetworkableInfo_addRef (12)

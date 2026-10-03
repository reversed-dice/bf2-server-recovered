// FUNCTION: BF2 0x7384b0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x28];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x7384b0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ConsoleObjectBaseImpl_getMinNoArgs_const (0x7384b0)

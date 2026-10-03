// FUNCTION: BF2 0xa86840
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x10];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0xa86840(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ModuleGame_getRef (0xa86840)

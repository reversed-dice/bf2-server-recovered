// FUNCTION: BF2 0xa57be0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x8];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0xa57be0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ModuleNetworkables_getRef (0xa57be0)

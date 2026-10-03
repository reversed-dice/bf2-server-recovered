// FUNCTION: BF2 0xac2fc0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x8];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0xac2fc0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_tool_ModuleToolObject_getRef (0xac2fc0)

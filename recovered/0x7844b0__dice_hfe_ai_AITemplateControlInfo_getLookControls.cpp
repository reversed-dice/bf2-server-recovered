// FUNCTION: BF2 0x7844b0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x98];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x7844b0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AITemplateControlInfo_getLookControls (0x7844b0)

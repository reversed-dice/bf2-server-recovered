// FUNCTION: BF2 0x7844a0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x88];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x7844a0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AITemplateControlInfo_getAimControls (0x7844a0)

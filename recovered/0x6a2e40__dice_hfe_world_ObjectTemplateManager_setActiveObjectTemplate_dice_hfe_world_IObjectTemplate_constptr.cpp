// FUNCTION: BF2 0x6a2e40
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xe0];
    void* m_v;
    void set(void* v) { m_v = v; }
};
void set_0x6a2e40(Accessor* p, void* v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectTemplateManager_setActiveObjectTemplate_dice_hfe_world_IObjectTemplate_constptr (0x6a2e40)

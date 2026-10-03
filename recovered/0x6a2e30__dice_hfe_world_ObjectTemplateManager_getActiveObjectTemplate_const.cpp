// FUNCTION: BF2 0x6a2e30
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xe0];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x6a2e30(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectTemplateManager_getActiveObjectTemplate_const (0x6a2e30)

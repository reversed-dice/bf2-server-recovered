// FUNCTION: BF2 0x6a2e50
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x80];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x6a2e50(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectTemplateManager_setDisplayError_bool (0x6a2e50)

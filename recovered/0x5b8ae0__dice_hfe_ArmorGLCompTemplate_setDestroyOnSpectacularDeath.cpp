// FUNCTION: BF2 0x5b8ae0
namespace dice { namespace hfe {
class ArmorGLCompTemplate {
public:
    char _pad[0x1ed];
    bool field;
    void setDestroyOnSpectacularDeath(bool v);
};
void ArmorGLCompTemplate::setDestroyOnSpectacularDeath(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ArmorGLCompTemplate_setDestroyOnSpectacularDeath (0x5b8ae0)

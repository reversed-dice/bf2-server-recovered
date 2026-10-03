// FUNCTION: BF2 0x5b8ac0
namespace dice { namespace hfe {
class ArmorGLCompTemplate {
public:
    char _pad[0x1ec];
    bool field;
    void setHideChildrenOnSpectacularDeath(bool v);
};
void ArmorGLCompTemplate::setHideChildrenOnSpectacularDeath(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ArmorGLCompTemplate_setHideChildrenOnSpectacularDeath (0x5b8ac0)

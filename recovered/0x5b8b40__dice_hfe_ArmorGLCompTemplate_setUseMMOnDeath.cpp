// FUNCTION: BF2 0x5b8b40
namespace dice { namespace hfe {
class ArmorGLCompTemplate {
public:
    char _pad[0x1ef];
    bool field;
    void setUseMMOnDeath(bool v);
};
void ArmorGLCompTemplate::setUseMMOnDeath(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ArmorGLCompTemplate_setUseMMOnDeath (0x5b8b40)

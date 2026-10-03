// FUNCTION: BF2 0x641900
namespace dice { namespace hfe {
class LightSourceTemplate {
public:
    char _pad[0x75];
    bool field;
    void setAffectLightmappedObjects(bool v);
};
void LightSourceTemplate::setAffectLightmappedObjects(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_LightSourceTemplate_setAffectLightmappedObjects (0x641900)

// FUNCTION: BF2 0x5adf90
namespace dice { namespace hfe {
class WheelEffectBundleTemplate {
public:
    char _pad[0x326];
    bool field;
    void setEmitDirectionZFromSpeedDof(bool v);
};
void WheelEffectBundleTemplate::setEmitDirectionZFromSpeedDof(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_WheelEffectBundleTemplate_setEmitDirectionZFromSpeedDof (0x5adf90)

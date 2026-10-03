// FUNCTION: BF2 0x598130
namespace dice { namespace hfe {
class EffectBundle {
public:
    char _pad[0x2ac];
    bool field;
    void overRideTimeToLive(bool v);
};
void EffectBundle::overRideTimeToLive(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_EffectBundle_overRideTimeToLive (0x598130)

// FUNCTION: BF2 0x43a860
namespace dice { namespace hfe { namespace world {
class IObjectptr {
public:
    void togglePhysicsOnOff(bool enable, bool alwaysOn);
    void turnPhysicsOn(bool enable);
};
void IObjectptr::turnPhysicsOn(bool enable) {
    togglePhysicsOnOff(enable, true);
}
} } }
// REVERSED_FUNCTION: dice_hfe_turnPhysicsOn_dice_hfe_world_IObjectptr_bool (0x43a860)
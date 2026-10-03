// FUNCTION: BF2 0x43a850
namespace dice { namespace hfe { namespace world {
class IObject;
} } }

namespace dice { namespace hfe {

void togglePhysicsOnOff(world::IObject*, bool, bool);

void turnPhysicsOff(world::IObject* obj, bool flag) {
    togglePhysicsOnOff(obj, flag, false);
}

} }
// REVERSED_FUNCTION: dice_hfe_turnPhysicsOff_dice_hfe_world_IObjectptr_bool (0x43a850)
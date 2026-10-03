// FUNCTION: BF2 0x5211a0
namespace dice { namespace hfe { namespace world {
class Vec3;
class PlayerControlObject {
public:
    typedef bool (*ExitFn)(PlayerControlObject*, Vec3&, int);
    bool getExitPosition(Vec3& out);
};
bool PlayerControlObject::getExitPosition(Vec3& out) {
    ExitFn fn = (ExitFn)(*(void***)this)[128];
    return fn(this, out, 0);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObject_getExitPosition_dice_hfe_Vec3ref (0x5211a0)

// FUNCTION: BF2 0x6075a0
namespace dice { namespace hfe { namespace world {

class MultiFireArmTargetCompTemplate {
public:
    unsigned int getRef();
};

unsigned int MultiFireArmTargetCompTemplate::getRef() {
    return *(unsigned int*)((char*)this + 0x58);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_MultiFireArmTargetCompTemplate_getRef (0x6075a0)
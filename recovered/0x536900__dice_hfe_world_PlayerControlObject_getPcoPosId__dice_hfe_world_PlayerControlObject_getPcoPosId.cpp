// FUNCTION: BF2 0x536900
namespace dice { namespace hfe { namespace world {

class PlayerControlObject {
public:
    unsigned long getPcoPosId() const;
};

unsigned long PlayerControlObject::getPcoPosId() const {
    return *(unsigned long*)((char*)this + 0x250) + 0x318;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObject_getPcoPosId (0x536900)
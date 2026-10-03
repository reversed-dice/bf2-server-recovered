// FUNCTION: BF2 0x5369e0
namespace dice { namespace hfe { namespace world {

struct RidingInfo {
    unsigned char _pad0[0x290];
    float ridingDistMod;
};

class PlayerControlObject {
public:
    float getRidingWithDistMod() const;

private:
    unsigned char _pad0[0x250];
    RidingInfo* m_ridingInfo;
};

float PlayerControlObject::getRidingWithDistMod() const {
    return m_ridingInfo->ridingDistMod;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObject_getRidingWithDistMod (0x5369e0)
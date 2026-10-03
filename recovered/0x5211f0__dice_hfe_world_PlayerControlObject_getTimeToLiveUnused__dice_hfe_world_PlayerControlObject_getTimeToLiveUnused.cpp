// FUNCTION: BF2 0x5211f0
namespace dice { namespace hfe { namespace world {

class PlayerControlObject {
public:
    float getTimeToLiveUnused() const;

private:
    unsigned char __pad[0x3e0];
    float m_timeToLiveUnused;
};

float PlayerControlObject::getTimeToLiveUnused() const {
    return m_timeToLiveUnused;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObject_getTimeToLiveUnused (0x5211f0)
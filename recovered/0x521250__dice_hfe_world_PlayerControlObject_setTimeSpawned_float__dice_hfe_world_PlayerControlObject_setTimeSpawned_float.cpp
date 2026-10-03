// FUNCTION: BF2 0x521250
namespace dice { namespace hfe { namespace world {

class PlayerControlObject {
public:
    void setTimeSpawned(float time);

private:
    unsigned char m_pad[0x3e8];  // offset 0x000
    float m_timeSpawned;         // offset 0x3e8
};

void PlayerControlObject::setTimeSpawned(float time) {
    m_timeSpawned = time;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObject_setTimeSpawned_float (0x521250)
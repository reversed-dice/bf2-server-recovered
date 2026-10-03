// FUNCTION: BF2 0x536aa0
namespace dice { namespace hfe { namespace world {

class PlayerControlObject {
public:
    float getSprintFactor() const;

private:
    unsigned char _pad_0x250[0x250];

    struct SprintData {
        unsigned char _pad_0x3b0[0x3b0];
        float m_sprintFactor;
    };

    SprintData* m_sprintData;
};

float PlayerControlObject::getSprintFactor() const {
    return m_sprintData->m_sprintFactor;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObject_getSprintFactor_const (0x536aa0)
// FUNCTION: BF2 0x5219c0
namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    void setListenerObstruction(float val);

    char _pad[0x3bc];
    float m_listenerObstruction;
};

void PlayerControlObjectTemplate::setListenerObstruction(float val)
{
    if (val < 0.0f) {
        val = 0.0f;
    } else if (val > 1.0f) {
        val = 1.0f;
    }
    m_listenerObstruction = val;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObjectTemplate_setListenerObstruction_float (0x5219c0)

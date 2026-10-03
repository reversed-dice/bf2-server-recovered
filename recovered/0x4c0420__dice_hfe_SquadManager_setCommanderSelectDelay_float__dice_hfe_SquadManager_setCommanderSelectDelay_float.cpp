// FUNCTION: BF2 0x4c0420
namespace dice { namespace hfe {

class SquadManager {
public:
    void setCommanderSelectDelay(float delay);

private:
    // offset 0x00-0x43: vtable ptr + other members
    unsigned char __pad[0x44];
    float m_commanderSelectDelay; // offset 0x44
};

void SquadManager::setCommanderSelectDelay(float delay) {
    m_commanderSelectDelay = delay;
}

} } // namespace
// REVERSED_FUNCTION: dice_hfe_SquadManager_setCommanderSelectDelay_float (0x4c0420)
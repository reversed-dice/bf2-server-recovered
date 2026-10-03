// FUNCTION: BF2 0x5621a0
namespace dice { namespace hfe { namespace world {

struct TriggerableInfo {
    unsigned char _pad[0x210];
    unsigned int m_triggerId;
};

class Triggerable {
public:
    unsigned int getTriggerId() const;

private:
    unsigned char _pad[0x248];
    TriggerableInfo* m_triggerInfo;
};

unsigned int Triggerable::getTriggerId() const {
    return m_triggerInfo->m_triggerId;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Triggerable_getTriggerId_const (0x5621a0)
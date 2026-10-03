// FUNCTION: BF2 0x4cd7d0
namespace dice { namespace hfe {

extern const float s_maxVoteTimePeriod;

class ClientVoteManager {
public:
    bool getDisallowedForTimePeriod() const;
private:
    // offset 0x00-0x37: other members (unknown)
    unsigned char _0x00[0x38];
    float m_voteTimePeriod; // offset 0x38
};

bool ClientVoteManager::getDisallowedForTimePeriod() const {
    return m_voteTimePeriod > s_maxVoteTimePeriod;
}

} } // namespace
// REVERSED_FUNCTION: dice_hfe_ClientVoteManager_getDisallowedForTimePeriod (0x4cd7d0)
// FUNCTION: BF2 0x4d07f0
namespace dice { namespace hfe {

class Vote {
public:
    float getMajority() const;
private:
    char m_pad[0x10];
    float m_majority;
};

float Vote::getMajority() const {
    return m_majority;
}

} } // namespace dice::hfe
// REVERSED_FUNCTION: dice_hfe_Vote_getMajority_const (0x4d07f0)
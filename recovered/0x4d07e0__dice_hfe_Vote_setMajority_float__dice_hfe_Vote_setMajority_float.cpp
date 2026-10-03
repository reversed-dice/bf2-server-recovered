// FUNCTION: BF2 0x4d07e0
namespace dice { namespace hfe {

class Vote {
public:
    void setMajority(float majority);

private:
    unsigned long long m_ownerId; // offset 0x00
    unsigned int m_type;          // offset 0x08
    unsigned int m_count;         // offset 0x0C
    float m_majority;             // offset 0x10
};

void Vote::setMajority(float majority) {
    m_majority = majority;
}

} } // namespace
// REVERSED_FUNCTION: dice_hfe_Vote_setMajority_float (0x4d07e0)
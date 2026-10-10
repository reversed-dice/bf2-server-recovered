// FUNCTION: BF2 0x561a40
// BF2_COMPILER: gcc-4.0
namespace dice { namespace hfe { namespace world {

class TriggerTemplate {
public:
    char _pad[0x204];
    float m_chance;

    void setChance(float chance);
};

void TriggerTemplate::setChance(float chance) {
    if (chance < 0.0f) {
        chance = 0.0f;
    } else if (chance > 1.0f) {
        chance = 1.0f;
    }
    m_chance = chance;
}

} } }

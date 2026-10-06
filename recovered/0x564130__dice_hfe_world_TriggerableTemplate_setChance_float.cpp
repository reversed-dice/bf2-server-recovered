// FUNCTION: BF2 0x564130
namespace dice {
namespace hfe {
namespace world {

class TriggerableTemplate {
public:
    char pad[0x214];
    float m_chance;

    void setChance(float val);
};

void TriggerableTemplate::setChance(float val) {
    if (val < 0.0f) {
        val = 0.0f;
    } else if (val > 1.0f) {
        val = 1.0f;
    }
    m_chance = val;
}

}
}
}

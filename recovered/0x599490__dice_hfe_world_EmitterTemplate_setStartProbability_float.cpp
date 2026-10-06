// FUNCTION: BF2 0x599490
namespace dice {
namespace hfe {
namespace world {

class EmitterTemplate {
public:
    char pad[0x1d0];
    float m_startProbability;

    void setStartProbability(float p);
};

void EmitterTemplate::setStartProbability(float p) {
    if (p >= 0.0f && p <= 1.0f) {
        m_startProbability = p;
    }
}

}
}
}

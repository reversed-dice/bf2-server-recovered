// FUNCTION: BF2 0x62c600
namespace dice {
namespace hfe {
namespace world {

class CarEngine {
public:
    char pad[0x2d8];
    float m_2d8;
    char pad2[0x2f0 - 0x2d8 - 4];
    bool m_2f0;

    void applyBrakes(float param_1, float param_2);
};

void CarEngine::applyBrakes(float param_1, float param_2) {
    int v1 = -1;
    if (-param_2 > param_1) {
    } else {
        v1 = param_1 > param_2;
    }
    int v2 = -1;
    if (-param_2 > m_2d8) {
    } else {
        v2 = m_2d8 > param_2;
    }
    m_2f0 = (v1 + v2 == 0);
}

}
}
}

// FUNCTION: BF2 0x62da80
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace world {

class EngineTemplate {
public:
    float getGearRatio(int gear) const;

    unsigned char m_pad[0x44c];
    float m_44c;                // 0x44c
};

class Engine {
public:
    float getCurrentRatio() const;

    unsigned char m_pad[0x2c0];
    EngineTemplate* m_template; // 0x2c0
    unsigned char m_pad2[0x2fc - 0x2c8];
    int m_gear;                 // 0x2fc
};

float Engine::getCurrentRatio() const
{
    return (3.5f * m_template->m_44c) / m_template->getGearRatio(m_gear);
}

} } }

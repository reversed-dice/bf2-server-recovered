// FUNCTION: BF2 0x473b30
namespace dice { namespace hfe { namespace world { 

class CommanderToolState {
public:
    float m_0;
    float m_4;
    float m_8;
    float m_c;
    char _pad10[0xc];
    float m_1c;
    float m_20;
    float m_24;
    int m_28;
    int m_2c;
    int m_30;
    int m_34;
    void reset();
};

void CommanderToolState::reset()
{
    m_28 = 0;
    m_2c = 0;
    m_0 = 0.0f;
    m_8 = 0.0f;
    m_4 = 0.0f;
    m_c = 0.0f;
    m_1c = 0.0f;
    m_20 = 0.0f;
    m_24 = 0.0f;
    m_30 = 0;
    m_34 = 0;
}

}}}

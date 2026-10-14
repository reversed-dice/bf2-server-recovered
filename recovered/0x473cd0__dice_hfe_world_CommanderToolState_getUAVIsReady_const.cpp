// FUNCTION: BF2 0x473cd0
namespace dice { namespace hfe { namespace world {

class CommanderToolState {
public:
    char _pad0[0x4];
    float m_4;
    char _pad8[0x18];
    float m_20;
    char _pad36[0x8];
    int m_2c;
    bool f() const;
};

bool CommanderToolState::f() const
{
	if (m_2c == 0) return false;
	if (m_20 <= 0.0f) return false;
	return m_4 <= 0.0f;
}

} } }

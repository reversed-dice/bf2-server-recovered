// FUNCTION: BF2 0x7be160
namespace dice { namespace hfe { namespace console {

class Parser {
public:
    struct Level {
        char _pad[0xa8];
        void reset();
    };

    char _pad[0x20];
    Level m_levels[10];
    Level* m_currentLevel; // +0x6b0 (0x20 + 10 * 0xa8 = 0x6b0)
    int m_depth;           // +0x6b8

    int incDepth();
};

int Parser::incDepth()
{
    if (m_depth > 8)
        return 0;
    m_levels[++m_depth].reset();
    m_currentLevel = &m_levels[m_depth];
    return 1;
}

} } }

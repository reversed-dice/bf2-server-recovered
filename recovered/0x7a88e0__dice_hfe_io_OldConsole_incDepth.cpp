// FUNCTION: BF2 0x7a88e0
namespace dice { namespace hfe { namespace io {

class OldConsole {
public:
    struct Level {
        char _pad[0xb0];
        void reset();
    };

    char _pad[0x238];
    Level m_levels[10];
    Level* m_currentLevel; // +0x918 (0x238 + 10 * 0xb0 = 0x918)
    int m_depth;           // +0x920

    int incDepth();
};

int OldConsole::incDepth()
{
    if (m_depth > 8)
        return 0;
    m_levels[++m_depth].reset();
    m_currentLevel = &m_levels[m_depth];
    return 1;
}

} } }

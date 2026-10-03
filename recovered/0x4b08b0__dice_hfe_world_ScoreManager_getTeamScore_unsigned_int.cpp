// FUNCTION: BF2 0x4b08b0
#include <string>
#include <ostream>
namespace dice { namespace hfe {

enum DebugType { DEBUG_ASSERT = 7 };

class Debug {
public:
    Debug(DebugType type, const std::string& file, int line, const std::string& msg);
    ~Debug();
    std::ostream& stream() { return m_stream; }
    char m_pad0[0x20];
    std::ostream m_stream;
    char m_pad1[0x50];
};

namespace world {

struct TeamScore {
    char m_data[0x94];
};

class ScoreManager {
public:
    TeamScore* getTeamScore(unsigned int team);
private:
    char m_pad0[0xb8];
    TeamScore m_teams[2];
};

TeamScore* ScoreManager::getTeamScore(unsigned int team) {
    if (team - 1 > 1) {
        Debug(DEBUG_ASSERT, std::string("Game/GameLogic/ScoreSystem/ScoreManager.cpp"), 0xde, std::string("")).stream()
            << "TBM: Incorrect team number " << (unsigned long)team;
    }
    return &m_teams[team - 1];
}

} } }

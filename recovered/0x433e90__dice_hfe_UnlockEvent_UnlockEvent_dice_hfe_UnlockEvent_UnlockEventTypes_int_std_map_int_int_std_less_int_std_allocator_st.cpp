// FUNCTION: BF2 0x433e90
#include <map>

namespace dice { namespace hfe {

class GameEvent {
public:
    GameEvent();
    char _pad0[0x10];
};

class UnlockEvent : public GameEvent {
public:
    enum UnlockEventTypes { };

    int m_type;              // +0x10
    int m_team;              // +0x14
    int m_counts[2][7];      // +0x18

    UnlockEvent(UnlockEventTypes type, int team, std::map<int, int>* unlocks);
    void executeClient();
};

UnlockEvent::UnlockEvent(UnlockEventTypes type, int team, std::map<int, int>* unlocks)
{
    m_team = team;
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2e850);
    m_type = type;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 7; ++j) {
            m_counts[i][j] = unlocks[i][j];
        }
    }
}

} }

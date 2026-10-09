// FUNCTION: BF2 0x4207b0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <cstring>

namespace dice { namespace hfe {

class GameEvent {
public:
    GameEvent();
    virtual ~GameEvent();
    char _pad[0x8];
};

class ChangeSquadNameEvent : public GameEvent {
public:
    ChangeSquadNameEvent(int team, int squad, int player, std::string const& name);
    virtual ~ChangeSquadNameEvent();

    char m_name[32];         // +0x10
    unsigned char m_len;    // +0x30
    unsigned char m_team;   // +0x31
    unsigned char m_squad;  // +0x32
    unsigned char m_player; // +0x33
};

ChangeSquadNameEvent::ChangeSquadNameEvent(int team, int squad, int player, std::string const& name) {
    int len = 31;
    if ((int)name.length() < 31) len = name.length();
    m_len = len;
    strncpy(m_name, name.c_str(), m_len);
    m_squad = squad;
    m_team = team;
    m_player = player;
    m_name[m_len] = 0;
}

} }

// FUNCTION: BF2 0x431df0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <cstring>

namespace dice { namespace hfe {

enum SayTarget {
    SAY_TARGET_ALL = 0
};

class GameEvent {
public:
    GameEvent();
    virtual ~GameEvent();
    char _pad[0x8];
};

class StringManagerEvent : public GameEvent {
public:
    StringManagerEvent(std::string const& str, SayTarget target, int player, bool b1, bool b2);
    virtual ~StringManagerEvent();

    SayTarget m_target;   // +0x10
    char m_str[68];       // +0x14
    unsigned int m_len;   // +0x58
    int m_player;         // +0x5c
    bool m_b1;            // +0x60
    bool m_b2;            // +0x61
};

StringManagerEvent::StringManagerEvent(std::string const& str, SayTarget target, int player, bool b1, bool b2)
{
    m_target = target;
    m_player = player;
    unsigned int len = strlen(str.c_str());
    if (len > 0x3e) {
        len = 0x3f;
    }
    m_len = len;
    strncpy(m_str, str.c_str(), len);
    m_b1 = b1;
    m_b2 = b2;
    m_str[m_len] = '\0';
}

} }

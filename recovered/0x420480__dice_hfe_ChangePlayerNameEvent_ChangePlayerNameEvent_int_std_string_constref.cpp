// FUNCTION: BF2 0x420480
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

namespace dice { namespace hfe {

class GameEvent {
public:
    GameEvent();
    virtual ~GameEvent();
    char pad[8];
};

class ChangePlayerNameEvent : public GameEvent {
public:
    ChangePlayerNameEvent(int id, std::string const& name);

    char m_name[32]; // +0x10
    char m_id;       // +0x30
};

ChangePlayerNameEvent::ChangePlayerNameEvent(int id, std::string const& name)
    : GameEvent()
{
    int len = name.size();
    if (len > 30) {
        len = 31;
    }
    int i = 0;
    while (i < len) {
        m_name[i] = name[i];
        i++;
    }
    m_name[i] = '\0';
    m_id = id;
}

} }

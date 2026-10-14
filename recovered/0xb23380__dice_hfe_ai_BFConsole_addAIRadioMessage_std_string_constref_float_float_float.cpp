// FUNCTION: BF2 0xb23380
// BF2_FLAGS: -fno-strict-aliasing
#include <map>
#include <string>

namespace dice { namespace hfe {

class VoiceMessages {
public:
    void namesToIds(int*, int*, int*, std::string const&, std::string const&, std::string const&);
};

class GameLogic {
public:
    VoiceMessages* getVoiceMessages() const;
};

class IGameLogic { public: virtual void slot86(); };

extern IGameLogic* gameLogic;

namespace ai {

enum AIRadioMessageType { };

struct AIRadioMessageSettings {
    AIRadioMessageType x;
    float y;
    float z;
    float w;
};

class BFConsole {
public:
    char _pad[0x10];
    std::map<std::string, AIRadioMessageType> m_byName;
    std::map<unsigned char, AIRadioMessageSettings> m_settings;
    std::map<AIRadioMessageType, unsigned char> m_byType;

    void addAIRadioMessage(std::string const& name, float a, float b, float c);
};

void BFConsole::addAIRadioMessage(std::string const& name, float a, float b, float c)
{
    int id;
    ((GameLogic*)gameLogic)->getVoiceMessages()->namesToIds(&id, 0, 0, name, std::string(""), std::string(""));
    AIRadioMessageType t = m_byName.find(name)->second;
    AIRadioMessageSettings s;
    s.x = t;
    s.y = a;
    s.z = b;
    s.w = c;
    m_settings.insert(std::make_pair(id, s));
    m_byType.insert(std::make_pair(t, id));
}

} } }

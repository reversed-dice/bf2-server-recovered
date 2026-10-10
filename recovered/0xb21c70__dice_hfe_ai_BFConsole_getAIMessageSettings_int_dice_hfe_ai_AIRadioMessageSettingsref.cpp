// FUNCTION: BF2 0xb21c70
#include <map>

namespace dice { namespace hfe { namespace ai {

struct __attribute__((aligned(4))) AIRadioMessageSettings {
    int a;
    int b;
    int c;
    int d;
};

class BFConsole {
public:
    char _pad[0x40];
    std::map<unsigned char, AIRadioMessageSettings> m_settings;

    bool getAIMessageSettings(int type, AIRadioMessageSettings& out);
};

bool BFConsole::getAIMessageSettings(int type, AIRadioMessageSettings& out) {
    unsigned char t = (unsigned char)type;
    std::map<unsigned char, AIRadioMessageSettings>::iterator it = m_settings.find(t);
    if (it != m_settings.end()) {
        out = it->second;
        return true;
    }
    return false;
}

} } }

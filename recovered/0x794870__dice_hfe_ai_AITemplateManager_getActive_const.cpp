// FUNCTION: BF2 0x794870
#include <string>
namespace dice { namespace hfe { namespace ai {

class AITemplate;

class AITemplateManager {
public:
    std::string getActive() const;
    char _pad0[0x38];
    const std::string* m_active;
};

std::string AITemplateManager::getActive() const
{
    if (m_active)
        return *m_active;
    return "";
}

} } }

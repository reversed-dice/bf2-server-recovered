// FUNCTION: BF2 0x795e30
#include <string>
namespace dice { namespace hfe { namespace ai {

class AITemplatePlugIn;

class AITemplatePlugInManager {
public:
    std::string getActive() const;
    char _pad0[0x38];
    const std::string* m_active;
};

std::string AITemplatePlugInManager::getActive() const
{
    if (m_active)
        return *m_active;
    return "";
}

} } }

// FUNCTION: BF2 0x6a2830
// BF2_FLAGS: -fno-strict-aliasing
#include <map>
#include <string>

namespace dice { namespace hfe {

int compareIgnoreCase(char const* a, char const* b);

namespace world {

class ObjectTemplateManager {
public:
    char _pad0[0xb0];
    std::map<unsigned int, std::string> m_templateClasses;   // +0xb0

    void registerTemplateClass(unsigned int id, std::string const& name);
};

void ObjectTemplateManager::registerTemplateClass(unsigned int id, std::string const& name)
{
    for (std::map<unsigned int, std::string>::iterator it = m_templateClasses.begin();
         it != m_templateClasses.end(); ++it) {
        if (compareIgnoreCase(name.c_str(), it->second.c_str()) == 0) {
            m_templateClasses.erase(it);
            break;
        }
    }
    m_templateClasses[id] = name;
}

} } }

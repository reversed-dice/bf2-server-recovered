#include <map>
#include <string>

// FUNCTION: BF2 0x6a0eb0
namespace dice { namespace hfe { namespace world {

class ObjectTemplateManager {
public:
    char pad0[0xb0];
    std::map<unsigned int, std::string> m_classes;
    std::string const& getClassNameFromTemplateClassID(unsigned int) const;
};

std::string const& ObjectTemplateManager::getClassNameFromTemplateClassID(unsigned int id) const {
    static std::string noClass("UnknownTemplateClass");
    std::map<unsigned int, std::string>::const_iterator it = m_classes.find(id);
    return (it == m_classes.end()) ? noClass : it->second;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectTemplateManager_getClassNameFromTemplateClassID_unsigned_int_const (0x6a0eb0)

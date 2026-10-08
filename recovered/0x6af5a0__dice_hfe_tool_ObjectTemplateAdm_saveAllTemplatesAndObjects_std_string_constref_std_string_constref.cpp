// FUNCTION: BF2 0x6af5a0
#include <string>

namespace dice { namespace hfe { namespace tool {

class ObjectTemplateAdm {
public:
    bool saveAllTemplates(std::string const& path);
    bool saveAllObjects(std::string const& path, bool a, bool b, bool c);
    bool saveAllTemplatesAndObjects(std::string const& a, std::string const& b);
};

} } }

bool dice::hfe::tool::ObjectTemplateAdm::saveAllTemplatesAndObjects(std::string const& a, std::string const& b) {
    if (!saveAllTemplates(b)) return false;
    if (!saveAllObjects(a, false, false, false)) return false;
    return true;
}

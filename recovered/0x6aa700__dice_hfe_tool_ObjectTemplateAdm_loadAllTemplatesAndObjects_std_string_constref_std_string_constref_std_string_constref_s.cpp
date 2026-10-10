// FUNCTION: BF2 0x6aa700
#include <string>
namespace dice { namespace hfe { namespace tool {

class ObjectTemplateAdm {
 public:
    bool loadAllTemplates(std::string const& a, std::string const& b);
    bool loadAllObjects(std::string const& a, std::string const& b);
    bool loadAllTemplatesAndObjects(std::string const& a, std::string const& b,
                                    std::string const& c, std::string const& d);
};

bool ObjectTemplateAdm::loadAllTemplatesAndObjects(std::string const& p2, std::string const& p3,
                                                   std::string const& p4, std::string const& p5) {
    if (!loadAllTemplates(p4, p5)) return false;
    if (!loadAllObjects(p2, p3)) return false;
    return true;
}

} } }

// BF2_FLAGS: --param inline-unit-growth=100000 --param large-function-growth=100000 -fno-strict-aliasing
// FUNCTION: BF2 0x6a8060
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace world {

class IObjectTemplate {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual unsigned int getType() const;
};

class ObjectTemplateManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual std::string const& getClassNameFromTemplateClassID(unsigned int) const;
};

extern ObjectTemplateManager* objectTemplateManager;

} } }

namespace dice { namespace hfe { namespace tool {

class ObjectTemplateAdm {
public:
    std::string getTemplateType(dice::hfe::world::IObjectTemplate const* tmpl);
};

std::string ObjectTemplateAdm::getTemplateType(dice::hfe::world::IObjectTemplate const* tmpl) {
    std::stringstream ss;
    if (!tmpl) {
        ss << "No object template";
    } else {
        ss << dice::hfe::world::objectTemplateManager->getClassNameFromTemplateClassID(tmpl->getType());
    }
    return ss.str();
}

} } }

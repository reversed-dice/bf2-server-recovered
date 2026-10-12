// FUNCTION: BF2 0x58c8f0
#include <string>

namespace dice { namespace hfe {
namespace world {

class SimpleObjectTemplate {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual std::string const& getName() const;
    std::string makeSoundTemplateName(std::string const& name) const;
};

std::string SimpleObjectTemplate::makeSoundTemplateName(std::string const& name) const {
    std::string s("S_");
    s.append(getName());
    s += '_';
    s.append(name);
    return s;
}

} } }

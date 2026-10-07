// FUNCTION: BF2 0x575be0
#include <string>

namespace dice {
namespace hfe {
namespace world {

class SimpleObjectTemplate {
public:
    virtual void unk00();
    virtual void* addSoundTemplate(const std::string& name);
    std::string makeSoundTemplateName(const std::string& name) const;
};

class BundleTemplate : public SimpleObjectTemplate {
public:
    virtual void* addSoundTemplate(const std::string& name);
};

void* BundleTemplate::addSoundTemplate(const std::string& name)
{
    void* res = SimpleObjectTemplate::addSoundTemplate(name);
    typedef void (*Method240)(BundleTemplate*, const std::string&);
    Method240 fn = (Method240)(*(void***)this)[0x240 / 8];
    std::string s = makeSoundTemplateName(name);
    fn(this, s);
    return res;
}

} // namespace world
} // namespace hfe
} // namespace dice

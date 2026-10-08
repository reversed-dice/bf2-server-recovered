// FUNCTION: BF2 0x58c9b0
#include <string>

namespace dice {
namespace hfe {
namespace world {

class ObjectTemplateManager {
public:
    virtual void unk00();
};

extern ObjectTemplateManager* volatile objectTemplateManager;

class SimpleObjectTemplate {
public:
    virtual void unk00();
    std::string makeSoundTemplateName(const std::string& name) const;
    void* addSoundTemplate(const std::string& name);
};

void* SimpleObjectTemplate::addSoundTemplate(const std::string& name)
{
    typedef void* (*CreateFn)(ObjectTemplateManager*, unsigned int, const std::string&);
    CreateFn fn = (CreateFn)(*(void***)objectTemplateManager)[0xb0 / 8];
    void* obj;
    {
        std::string s = makeSoundTemplateName(name);
        obj = fn(objectTemplateManager, 0x985fd1, s);
    }
    typedef void (*Method98)(void*, int, int);
    ((Method98)(*(void***)obj)[0x98 / 8])(obj, 0x400, 0);
    return obj;
}

}
}
}

// FUNCTION: BF2 0x765de0
#include <string>
#include <vector>

namespace dice { namespace hfe {

struct IObject {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void setFilenames(char const** names, int count);
};

void parseTemplateFilenames(std::vector<char const*>* out, std::string* err,
                            std::string const& name);

void setTemplateFilenames(IObject* t, std::string const& name) {
    if (!t)
        return;
    std::string err;
    std::vector<char const*> files;
    parseTemplateFilenames(&files, &err, name);
    t->setFilenames(&files[0], (int)files.size());
}

} }

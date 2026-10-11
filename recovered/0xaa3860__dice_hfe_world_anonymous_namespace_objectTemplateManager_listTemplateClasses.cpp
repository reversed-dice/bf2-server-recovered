// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0xaa3860
#include <string>
#include <list>

namespace dice { namespace hfe { namespace world {

class ObjectTemplateManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void getTemplateClasses(std::list<std::pair<unsigned int, std::string> >& out);
};

extern ObjectTemplateManager* objectTemplateManager;

namespace {

std::string objectTemplateManager_listTemplateClasses() {
    std::list<std::pair<unsigned int, std::string> > classes;
    std::string res;
    objectTemplateManager->getTemplateClasses(classes);
    for (std::list<std::pair<unsigned int, std::string> >::iterator it = classes.begin(); it != classes.end(); ++it) {
        res.append(it->second);
        res.append("\n", 1);
    }
    return res;
}

}

} } }

// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0xaa38e0
#include <string>
#include <list>

namespace dice { namespace hfe { namespace world {

class PlayerManager {
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
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void getTemplateClasses(std::list<std::pair<unsigned int, std::string> >& out);
};

extern PlayerManager* playerManager;

namespace {

std::string playerManager_listTemplateClasses() {
    std::list<std::pair<unsigned int, std::string> > classes;
    std::string res;
    playerManager->getTemplateClasses(classes);
    for (std::list<std::pair<unsigned int, std::string> >::iterator it = classes.begin(); it != classes.end(); ++it) {
        res.append(it->second);
        res.append("\n", 1);
    }
    return res;
}

}

} } }

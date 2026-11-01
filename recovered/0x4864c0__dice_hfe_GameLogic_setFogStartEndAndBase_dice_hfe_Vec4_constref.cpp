// FUNCTION: BF2 0x4864c0
#include <string>

namespace dice { namespace hfe {

struct Vec4 {
    float x, y, z, w;
};

class Settings {
public:
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
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
    virtual void v27();
    virtual void v28();
    virtual void setValue(std::string const& key, Vec4 const& value);
};

class PostProductionFrameWork {
public:
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void setFogStartEndAndBase(Vec4 const& value);
};

class ClassManager {
public:
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual PostProductionFrameWork* getClass(std::string const& name);
};

extern Settings* settings;
extern ClassManager* classManager;

class GameLogic {
public:
    void setFogStartEndAndBase(Vec4 const& value);
};

void GameLogic::setFogStartEndAndBase(Vec4 const& value)
{
    settings->setValue(std::string("GSFogStartEndAndBase"), value);
    PostProductionFrameWork* pp = classManager->getClass(std::string("PostProductionFrameWork"));
    if (pp)
        pp->setFogStartEndAndBase(value);
}

} }

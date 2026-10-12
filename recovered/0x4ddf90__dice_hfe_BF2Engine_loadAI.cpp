// FUNCTION: BF2 0x4ddf90
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

namespace dice { namespace hfe {

class Settings {
public:
    virtual ~Settings();
    virtual void v1();  virtual void v2();  virtual void v3();  virtual void v4();
    virtual void v5();  virtual void v6();  virtual void v7();  virtual void v8();
    virtual void v9();  virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18();
    virtual bool* getFlag(std::string const& name, bool* def);
};

extern Settings* settings;

class BF2EngineSetup {
public:
    bool initAI();
};

class BF2Engine {
public:
    unsigned char _pad0[0x18];
    BF2EngineSetup* m_setup;
    bool loadAI();
};

bool BF2Engine::loadAI()
{
    bool def;
    bool* p = settings->getFlag(std::string("UseAI"), (def = false, &def));
    if (!*p)
        return false;
    if (!m_setup->initAI())
        return false;
    return true;
}

} }

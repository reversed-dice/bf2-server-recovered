// FUNCTION: BF2 0xb0af30

namespace dice { namespace hfe { namespace ai {

class PlugIn {
public:
    virtual void d0(); virtual void d1(); virtual void d2();
    virtual int getType();
    void setSoundSphereRadius(float, float);
};

class AITemplatePlugInManager {
public:
    PlugIn* getActiveTemplatePlugIn() const;
};
extern AITemplatePlugInManager* aiTemplatePlugInManager;

struct ConsoleClass155 {
    char _p0[0x30];
    int m_argc;
    int _pad0;
    float* m_arg0;
    float* m_arg1;
    char _p1[0x108 - 0x48];
    unsigned char m_hasResult;
    void* executeObjectMethod();
};
void* ConsoleClass155::executeObjectMethod() {
    if (m_argc != 2) return 0;
    float a0 = *m_arg0;
    float a1 = *m_arg1;
    m_hasResult = 0;
    PlugIn* p = 0;
    if (aiTemplatePlugInManager != 0) {
        PlugIn* t = aiTemplatePlugInManager->getActiveTemplatePlugIn();
        if (t != 0) {
            if (t->getType() == 3) p = t;
        }
    }
    p->setSoundSphereRadius(a0, a1);
    return 0;
}
}
}
}

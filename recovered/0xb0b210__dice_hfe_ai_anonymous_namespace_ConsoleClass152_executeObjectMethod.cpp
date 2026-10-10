// FUNCTION: BF2 0xb0b210

namespace dice { namespace hfe { namespace ai {

class PlugIn {
public:
    virtual void d0(); virtual void d1(); virtual void d2();
    virtual int getType();
    void setCoverSearchRadius(float);
};

class AITemplatePlugInManager {
public:
    PlugIn* getActiveTemplatePlugIn() const;
    static AITemplatePlugInManager* m_instance;
};

struct ConsoleClass152 {
    char _p0[0x30];
    int m_argc;
    int _pad0;
    float* m_argv;
    char _p1[0x108 - 0x40];
    unsigned char m_hasResult;
    char _p2[3];
    int m_result;
    void* executeObjectMethod();
};
void* ConsoleClass152::executeObjectMethod() {
    int sel = m_argc;
    if (sel == 0) {
        m_hasResult = 1;
        PlugIn* p = 0;
        if (AITemplatePlugInManager::m_instance != 0) {
            PlugIn* t = AITemplatePlugInManager::m_instance->getActiveTemplatePlugIn();
            if (t != 0) {
                if (t->getType() == 3) p = t;
            }
        }
        m_result = *(int*)((char*)p + 0x18);
        return &m_result;
    }
    if (sel == 1) {
        float val = *m_argv;
        m_hasResult = 0;
        PlugIn* p = 0;
        if (AITemplatePlugInManager::m_instance != 0) {
            PlugIn* t = AITemplatePlugInManager::m_instance->getActiveTemplatePlugIn();
            if (t != 0) {
                if (t->getType() == 3) p = t;
            }
        }
        p->setCoverSearchRadius(val);
        return 0;
    }
    return 0;
}
}
}
}

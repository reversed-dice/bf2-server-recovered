// FUNCTION: BF2 0xb19260

namespace dice { namespace hfe { namespace ai {

class PlugIn {
public:
    virtual void d0(); virtual void d1(); virtual void d2();
    virtual int getType();
};

class AITemplatePlugInManager {
public:
    PlugIn* getActiveTemplatePlugIn() const;
    static AITemplatePlugInManager* m_instance;
};

struct ConsoleClass169 {
    char _p0[0x30];
    int m_argc;
    int _pad0;
    int* m_arg0;
    int* m_arg1;
    char _p1[0x108 - 0x48];
    unsigned char m_hasResult;
    void* executeObjectMethod();
};
void* ConsoleClass169::executeObjectMethod() {
    if (m_argc != 2) return 0;
    int idx = *m_arg0;
    int val = *m_arg1;
    m_hasResult = 0;
    PlugIn* p = 0;
    if (AITemplatePlugInManager::m_instance != 0) {
        PlugIn* t = AITemplatePlugInManager::m_instance->getActiveTemplatePlugIn();
        if (t != 0) {
            if (t->getType() == 5) p = t;
        }
    }
    int* arr = *(int**)((char*)p + 0x10);
    arr[idx] = val;
    return 0;
}
}
}
}

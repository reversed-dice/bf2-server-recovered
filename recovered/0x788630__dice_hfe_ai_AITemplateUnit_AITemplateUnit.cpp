// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x788630
#include <string>
#include <ostream>
#include <new>

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

// Debug is 0x180 bytes, ostream at +0x20 (two guards -> frame 0x340).
struct Debug_788920 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_788920(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_788920();
};

namespace ai {

class IAISettings {
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
    virtual int countA();
    virtual int countB();
};

struct CommonSingletonServer {
    static IAISettings* m_iaiSettings;
};

struct AITemplateUnit {
    void* m_vptr;
    int m_8;
    int* m_10;
    int* m_18;
    int m_20;
    bool m_24;
    bool m_25;
    bool m_26;
    bool m_27;
    float m_28;
    float m_2c;
    int m_30;
};

} } }

// The check lives in AI/AIUtils/checkPointer.h: one inline body, inlined twice.
static inline __attribute__((always_inline))
void checkAlloc_788920(void* p)
{
    if (p == 0) {
        dice::hfe::Debug_788920(6, std::string("./AI/AIDLL/AI/AIUtils/checkPointer.h"), 0x2e,
                                std::string(&DAT_00bb25f1)).os
            << "AI::Allocation failed";
    }
}

void ctor_788920(dice::hfe::ai::AITemplateUnit* self)
{
    using dice::hfe::ai::CommonSingletonServer;

    *(void**)self = (void*)0xba4670;
    self->m_8 = -1;
    int* a = new int[CommonSingletonServer::m_iaiSettings->countA()];
    checkAlloc_788920(a);
    self->m_10 = a;
    int* b = new int[CommonSingletonServer::m_iaiSettings->countB()];
    checkAlloc_788920(b);
    self->m_18 = b;
    self->m_20 = 0x309;
    self->m_24 = 0;
    self->m_25 = 0;
    self->m_26 = 0;
    self->m_27 = 0;
    self->m_28 = 1000.0f;
    self->m_2c = 1000000.0f;
    self->m_30 = 0x17;
    for (int i = 0; i < CommonSingletonServer::m_iaiSettings->countB(); ++i)
        self->m_18[i] = 0;
    for (int i = 0; i < CommonSingletonServer::m_iaiSettings->countA(); ++i)
        self->m_10[i] = 0;
}

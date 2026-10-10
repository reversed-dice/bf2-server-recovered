// FUNCTION: BF2 0x8e36c0
// Target: 0x8e36c0 dice::hfe::world::(anonymous namespace)::ConsoleClass628::executeObjectMethod()
// Compiler: gcc-4.0
// Flags: -O2

#include <math.h>

namespace dice { namespace hfe {
namespace world {
extern unsigned int CID_StickyCollisionCompTemplate;
extern unsigned int IID_IProjectileCollisionCompTemplate;
void* getActiveTemplateComponent(unsigned int, unsigned int);

class StickyCollisionCompTemplate {
public:
    void setMaxStickAngle(float);
};

namespace {

class ConsoleClass628 {
public:
    virtual ~ConsoleClass628();
    virtual void* executeObjectMethod();

    char _pad[0x28];
    int m_argc;
    char _pad2[4];
    float* m_argv;
    char _pad3[0xc8];
    char m_active;
    char _pad4[3];
    float m_val;
};

void* ConsoleClass628::executeObjectMethod() {
    if (m_argc == 0) {
        m_active = 1;
        void* t = getActiveTemplateComponent(IID_IProjectileCollisionCompTemplate, CID_StickyCollisionCompTemplate);
        float cosVal = *(float*)((char*)t + 0x18);
        if (cosVal < -1.0f) cosVal = -1.0f;
        if (cosVal > 1.0f) cosVal = 1.0f;
        m_val = acosf(cosVal) * 57.2958f;
        return &m_val;
    }
    if (m_argc == 1) {
        float* pval = m_argv;
        unsigned int cid = CID_StickyCollisionCompTemplate;
        float val = *pval;
        m_active = 0;
        void* t = getActiveTemplateComponent(IID_IProjectileCollisionCompTemplate, cid);
        ((StickyCollisionCompTemplate*)t)->setMaxStickAngle(val);
        return 0;
    }
    return 0;
}

} } } }

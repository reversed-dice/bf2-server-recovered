// FUNCTION: BF2 0x7911f0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <ostream>
#include <new>

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

// Debug is 0x180 bytes, ostream at +0x20 (two guards -> frame 0x388).
struct Debug_7911f0 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_7911f0(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_7911f0();
};

namespace ai {

class AITemplatePlugIn {
public:
    virtual ~AITemplatePlugIn();
};

class AITemplatePhysical : public AITemplatePlugIn {
public:
    AITemplatePhysical();
    float m_8;
    float m_c;
    float m_10;
    float m_14;
    float m_18;
    int m_1c;
    char m_20;
    char m_21;
};

struct WreckFields {
    char _pad0[0x1c];
    int m_1c;
};

struct TemplateBuffer {
    char _pad0[0x20];
    WreckFields* m_fields;
};

class AITemplate;

class AITemplate {
public:
    AITemplate(const std::string& name);
    void addPlugIn(AITemplatePlugIn* plugin);
    bool createWreckTemplate();

    char* m_buffer;          // 0x0
    char _pad0[4];           // 0x8
    unsigned int m_flags;    // 0xc
    float m_10;              // 0x10
    float m_14;              // 0x14
    float m_18;              // 0x18
    unsigned char m_1c;      // 0x1c
    char _pad1[3];           // 0x1d
    std::string m_name;      // 0x20
    AITemplate* m_child;     // 0x28
};

} } }

// The check lives in AI/AIUtils/checkPointer.h: one inline body, inlined twice.
static inline __attribute__((always_inline))
void checkAlloc_7911f0(void* p)
{
    if (p == 0) {
        dice::hfe::Debug_7911f0(6, std::string("./AI/AIDLL/AI/AIUtils/checkPointer.h"), 0x2e,
                                std::string(&DAT_00bb25f1)).os
            << "AI::Allocation failed";
    }
}

bool dice::hfe::ai::AITemplate::createWreckTemplate()
{
    if ((m_flags & 0x1000000) == 0)
        return false;

    {
        std::string s(m_name);
        s.append("_wreck", 6);
        AITemplate* t = new AITemplate(s);
        checkAlloc_7911f0(t);
        m_child = t;
    }

    m_child->m_flags |= 0x2000000;
    m_child->m_10 = 20.0f;
    m_child->m_18 = 1.0f;
    m_child->m_1c = 1;
    m_child->m_14 = 10.0f;

    AITemplatePhysical* phys = new AITemplatePhysical();
    checkAlloc_7911f0(phys);
    phys->m_1c = ((TemplateBuffer*)m_buffer)->m_fields->m_1c;
    m_child->addPlugIn(phys);
    return true;
}

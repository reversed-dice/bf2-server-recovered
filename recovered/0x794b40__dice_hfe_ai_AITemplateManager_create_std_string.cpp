// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x794b40
#include <string>
#include <map>
#include <ostream>
#include <new>

extern "C" int strcasecmp(const char*, const char*);

namespace dice { namespace hfe {

enum DebugType { DEBUG_ERROR = 1, DEBUG_ALLOC = 6 };

class Debug {
public:
    Debug(DebugType type, const std::string& file, int line, const std::string& msg);
    ~Debug();
    std::ostream& stream() { return m_stream; }
    char m_pad0[0x20];
    std::ostream m_stream;
    char m_pad1[0x50];
};

struct NoCaseStringCompare {
    bool operator()(const std::string& a, const std::string& b) const {
        return strcasecmp(a.c_str(), b.c_str()) < 0;
    }
};

namespace io {

class IConsole {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual bool executeCommand(const std::string& cmd, std::string& result, int a, int b, int c, int d, int e);
    virtual void c4(); virtual void c5(); virtual void c6(); virtual void c7(); virtual void c8(); virtual void c9();
    virtual void c10(); virtual void c11(); virtual void c12(); virtual void c13(); virtual void c14(); virtual void c15();
    virtual void c16(); virtual void c17(); virtual void c18(); virtual void c19(); virtual void c20(); virtual void c21();
    virtual void c22(); virtual void c23(); virtual void c24(); virtual void c25(); virtual void c26(); virtual void c27();
    virtual void c28(); virtual void c29(); virtual void c30(); virtual void c31(); virtual void c32(); virtual void c33();
    virtual void c34(); virtual void c35();
    virtual std::string* c36();
    virtual void c37();
    virtual void setOutputMode(int mode);
    virtual int getOutputMode();
};

extern IConsole* mainConsole;

}

namespace ai {

class AITemplate {
public:
    AITemplate(const std::string& name);
    char _pad[0x30];
};

class MgrTemplate {
public:
    std::string m_name;      // 0x0
    AITemplate* m_template;  // 0x8
};

class AITemplateManager {
public:
    char _pad0[0x8];
    std::map<std::string, MgrTemplate*, NoCaseStringCompare> m_templates;  // 0x8
    MgrTemplate* m_active;   // 0x38
    char _pad1[0x8];
    std::map<AITemplate*, std::string> m_files;  // 0x48

    std::string create(const std::string& name);
};

// AI/AIUtils/checkPointer.h, one inline body inlined per new.
static inline __attribute__((always_inline))
void checkAlloc(void* p)
{
    if (p == 0) {
        dice::hfe::Debug(dice::hfe::DEBUG_ALLOC, std::string("./AI/AIDLL/AI/AIUtils/checkPointer.h"), 0x2e,
                         std::string("")).stream()
            << "AI::Allocation failed";
    }
}

std::string AITemplateManager::create(const std::string& name)
{
    std::map<std::string, MgrTemplate*, NoCaseStringCompare>::iterator it = m_templates.find(name);
    if (it != m_templates.end()) {
        Debug(DEBUG_ALLOC, std::string("AI/AIInterface/BFKnowledge/AITemplateManager.cpp"), 0x26,
              std::string("")).stream()
            << "Template '" << name << "' already exists";
        m_active = 0;
        return "Error: Template '" + name + "' already exists";
    }

    MgrTemplate* mgr = new MgrTemplate();
    checkAlloc(mgr);
    m_active = mgr;
    mgr->m_name = name;

    MgrTemplate* act = m_active;
    AITemplate* tmpl = new AITemplate(name);
    checkAlloc(tmpl);
    act->m_template = tmpl;
    m_templates[name] = m_active;

    std::string* file = io::mainConsole->c36();
    if (!file->empty())
        m_files[m_active->m_template] = *file;

    return "AITemplate '" + name + "' successfully created";
}

} } }

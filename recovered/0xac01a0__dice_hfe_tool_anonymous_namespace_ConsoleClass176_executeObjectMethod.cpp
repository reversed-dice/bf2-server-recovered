// FUNCTION: BF2 0xac01a0
#include <string>

namespace dice { namespace hfe { namespace tool {
class ObjectTemplateAdm {
public:
    bool saveAllTemplates(std::string const&);
    static std::string mDefaultSaveObjectTemplateFile;
};
extern ObjectTemplateAdm objectTemplateAdm;
} } }
namespace dice { namespace hfe { namespace tool {
struct ConsoleClass176 {
    char _p0[0x30];
    int m_argc;
    char _p1[0x108 - 0x34];
    unsigned char m_hasResult;
    char _p2[1];
    bool m_result;
    void* pad0();
    void* pad1();
    void* pad2();
    void* executeObjectMethod();
};
void* ConsoleClass176::pad0() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = objectTemplateAdm.saveAllTemplates(
        ObjectTemplateAdm::mDefaultSaveObjectTemplateFile);
    return &m_result;
}
void* ConsoleClass176::pad1() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = objectTemplateAdm.saveAllTemplates(
        ObjectTemplateAdm::mDefaultSaveObjectTemplateFile);
    return &m_result;
}
void* ConsoleClass176::pad2() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = objectTemplateAdm.saveAllTemplates(
        ObjectTemplateAdm::mDefaultSaveObjectTemplateFile);
    return &m_result;
}
void* ConsoleClass176::executeObjectMethod() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = objectTemplateAdm.saveAllTemplates(
        ObjectTemplateAdm::mDefaultSaveObjectTemplateFile);
    return &m_result;
}

}
}
}

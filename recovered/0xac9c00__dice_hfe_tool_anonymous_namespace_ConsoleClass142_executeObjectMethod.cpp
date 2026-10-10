// FUNCTION: BF2 0xac9c00
#include <string>

namespace dice { namespace hfe { namespace tool {

class ObjectTemplateAdm {
public:
    static std::string mDefaultSaveObjectFile;
    bool saveAllObjects(std::string const& path, bool a, bool b, bool c);
};

extern ObjectTemplateAdm objectTemplateAdm;

namespace {

class ConsoleClass142 {
public:
    virtual void v0();
    virtual bool* executeObjectMethod();

    char _pad[0x28];
    int m_argc; // 0x30
    std::string* m_argv; // 0x38 (std::string**)
    char _pad2[0x108 - 0x40];
    bool m_flag; // 0x108
    char _pad3;  // 0x109
    bool m_ret;  // 0x10a
};

bool* ConsoleClass142::executeObjectMethod() {
    if (m_argc == 0) {
        m_flag = true;
        m_ret = objectTemplateAdm.saveAllObjects(ObjectTemplateAdm::mDefaultSaveObjectFile, false, false, false);
        return &m_ret;
    }
    if (m_argc == 1) {
        std::string path = *m_argv;
        m_flag = true;
        m_ret = objectTemplateAdm.saveAllObjects(path, false, false, false);
        return &m_ret;
    }
    return 0;
}

} } } }

// FUNCTION: BF2 0x4ec4e0
#include <string>

class SystemInfo {
public:
    virtual void v0();
    virtual void v1();
    virtual const std::string& getName();
};

class Settings {
public:
    char _pad0[0x8];
    std::string m_name;
};

extern Settings* serverSettings;
extern SystemInfo* systemInfo();

std::string getServerName() {
    std::string s = serverSettings->m_name;
    if (s.empty()) {
        s.assign("BF2 server on ", 14);
        s.append(systemInfo()->getName());
    }
    return s;
}

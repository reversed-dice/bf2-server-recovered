// FUNCTION: BF2 0x7a4db0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <map>
#include <set>
#include <ostream>
#include <utility>

namespace dice { namespace hfe {

enum DebugType { DT_Debug = 0, DT_Info = 1, DT_Warning = 2, DT_Assert = 3, DT_4 = 4, DT_DxAssert = 5, DT_Error = 6, DT_7 = 7, DT_Log = 8 };

class Debug {
public:
    Debug(DebugType type, const std::string& file, int line, const std::string& msg);
    ~Debug();
    std::ostream& stream() { return m_stream; }
    char m_pad0[0x20];
    std::ostream m_stream;
    char m_pad1[0x50];
};

namespace io {

struct VariableSet { int m_value; };

inline bool operator<(VariableSet const& a, VariableSet const& b) { return a.m_value < b.m_value; }

class SettingsManagerBase {
public:
    char m_pad[0x240];
    std::set<std::string> m_userVars;
    std::map<VariableSet, std::set<std::string> > m_setVars;
    bool registerUserVar(const std::string& name, bool flag, VariableSet set);
};

bool SettingsManagerBase::registerUserVar(const std::string& name, bool flag, VariableSet set)
{
    std::set<std::string>::iterator found = m_userVars.find(name);
    if (found != m_userVars.end()) {
        Debug(DT_Error, std::string("IO/SettingsManager.cpp"), 115, std::string("")).stream()
            << "Var " << name << " is already registred";
        return false;
    }
    std::pair<std::set<std::string>::iterator, bool> added = m_userVars.insert(name);
    if (!flag)
        return true;
    std::map<VariableSet, std::set<std::string> >::iterator it = m_setVars.find(set);
    if (it == m_setVars.end()) {
        std::set<std::string> names;
        std::pair<std::map<VariableSet, std::set<std::string> >::iterator, bool> ins =
            m_setVars.insert(std::make_pair(set, names));
    }
    std::pair<std::set<std::string>::iterator, bool> ins2 =
        m_setVars.find(set)->second.insert(name);
    return true;
}

} } }

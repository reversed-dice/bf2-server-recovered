// FUNCTION: BF2 0x4de7a0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <map>
#include <set>

namespace dice { namespace hfe {

struct Settings {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void slot13();
    virtual void slot14();
    virtual void slot15();
    virtual void slot16();
    virtual void slot17();
    virtual void slot18();
    virtual void slot19();
    virtual void slot20();
    virtual void slot21(const std::string& name, const bool& value);
    virtual bool slot22(const std::string& name) const;
};

extern Settings* settings;

namespace io {

struct VariableSet {
    int m_value;
};

class SettingsManagerBase {
public:
    bool registerUserVar(const std::string& name, bool flag, VariableSet set);
    bool boolRegisterUserVar(const std::string& name, const bool& value, bool flag,
                             VariableSet set);
};

bool SettingsManagerBase::boolRegisterUserVar(const std::string& name,
                                              const bool& value, bool flag,
                                              VariableSet set)
{
    if (!registerUserVar(name, flag, set))
        return false;
    if (!settings->slot22(name))
        settings->slot21(name, value);
    bool v = value;
    ((std::map<std::string, bool>*)((char*)this + 0x150))->insert(std::make_pair(name, v));
    ((std::set<std::string>*)((char*)this + 0x120))->insert(name);
    return true;
}

} } }

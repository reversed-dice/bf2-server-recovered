// FUNCTION: BF2 0x747bd0
#include <string>
#include <map>

namespace dice { namespace hfe {

struct SettingsLess {
    bool operator()(std::string const& a, std::string const& b) const;
};

class ISettingsRepostitory {
public:
    virtual void v_dummy_0();
    virtual void v_dummy_1();
};

struct SettingsList {
    std::map<std::string, int, SettingsLess> m_map;
    unsigned long m_tail;
    SettingsList() : m_map(), m_tail(0) {}
};

class SettingsRepostitory : public ISettingsRepostitory {
public:
    SettingsRepostitory();
private:
    int m_ref;
    char m_pad[4];
    SettingsList m_1;
    SettingsList m_2;
    SettingsList m_3;
    SettingsList m_4;
    SettingsList m_5;
    SettingsList m_6;
    SettingsList m_7;
};

SettingsRepostitory::SettingsRepostitory() : m_ref(1) {}

} }

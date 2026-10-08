// FUNCTION: BF2 0x4ec530
#include <string>

namespace dice { namespace hfe {

class SettingsManager {
public:
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual std::string const& getString(std::string const& name, std::string const& def);
};

extern SettingsManager* settings;

void setLowerCase(std::string& s);

std::string getModName()
{
    std::string result = settings->getString("GSModDirectory", "(unknown)");
    std::string::size_type pos = result.find('/');
    if (pos != std::string::npos)
    {
        result.erase(0, pos + 1);
        setLowerCase(result);
    }
    return result;
}

}}

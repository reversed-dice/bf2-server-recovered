// FUNCTION: BF2 0x744f70
#include <string>
namespace dice { namespace hfe {

class EventManager {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12();
    virtual void registerEvent(int category, int flags, const std::string& name);
};
extern EventManager* eventManager;

void initSettingsRepostitory()
{
    eventManager->registerEvent(5, 1, std::string("ECCoreCEChangedSetting"));
}

} }

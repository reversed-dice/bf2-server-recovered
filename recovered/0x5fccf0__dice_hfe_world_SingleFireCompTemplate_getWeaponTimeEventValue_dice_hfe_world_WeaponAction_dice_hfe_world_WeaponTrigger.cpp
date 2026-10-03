// FUNCTION: BF2 0x5fccf0
#include <vector>
namespace dice { namespace hfe { namespace world {

enum WeaponAction {};
enum WeaponTrigger {};

struct WeaponTimeEvent {
    WeaponAction action;
    WeaponTrigger trigger;
    float value;
    int _pad;
};

class SingleFireCompTemplate {
public:
    float getWeaponTimeEventValue(WeaponAction action, WeaponTrigger trigger);
    char _pad0[0x90];
    std::vector<WeaponTimeEvent> m_timeEvents;
};

float SingleFireCompTemplate::getWeaponTimeEventValue(WeaponAction action, WeaponTrigger trigger)
{
    for (std::vector<WeaponTimeEvent>::iterator it = m_timeEvents.begin(); it != m_timeEvents.end(); ++it) {
        if (it->action == action && it->trigger == trigger)
            return it->value;
    }
    return -1.0f;
}

} } }

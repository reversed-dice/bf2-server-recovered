// FUNCTION: BF2 0x439b30
#include <map>
#include <string>

namespace dice { namespace hfe {

class GameEventRegistry {
public:
    const std::string* getEventName(unsigned int eventId) const;
};

const std::string* GameEventRegistry::getEventName(unsigned int eventId) const {
    typedef std::map<unsigned int, std::string> EventMap;
    EventMap const& events = *reinterpret_cast<EventMap const*>(
        reinterpret_cast<char const*>(this) + 0x40);
    EventMap::const_iterator it = events.find(eventId);
    extern std::string const dice_hfe_UnknownEventName;
    if (events.end() != it) {
        return &it->second;
    }
    return &dice_hfe_UnknownEventName;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameEventRegistry_getEventName_unsigned_int_const (0x439b30)
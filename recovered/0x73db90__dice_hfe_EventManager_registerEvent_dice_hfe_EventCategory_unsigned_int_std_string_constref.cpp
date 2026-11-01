// FUNCTION: BF2 0x73db90
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <ostream>
#include <map>
#include <utility>

namespace dice { namespace hfe {

enum DebugType { DEBUG_6 = 6 };

enum EventCategory {
    EC_0 = 0
};

class Debug {
public:
    Debug(DebugType type, std::string const& file, int line, std::string const& msg);
    ~Debug();
    std::ostream& stream() { return m_stream; }
    char m_pad0[0x20];
    std::ostream m_stream;
    char m_pad1[0x50];
};

class EventManager {
public:
    virtual void e0();
    virtual void e1();
    virtual void e2();
    virtual void e3();
    virtual void e4();
    virtual void e5();
    virtual void e6();
    virtual void e7();
    virtual void e8();
    virtual void e9();
    virtual void e10();
    virtual void e11();
    virtual void e12();
    virtual bool registerEvent(EventCategory cat, unsigned int id, std::string const& name);
    char _pad0[0xc8 - 8];
    std::map<int, std::string> m_events[8];
};

bool EventManager::registerEvent(EventCategory cat, unsigned int id, std::string const& name)
{
    std::map<int, std::string>& events = m_events[cat];
    std::map<int, std::string>::iterator it = events.find(id);
    if (it != events.end()) {
        Debug(DEBUG_6, std::string("Core/EventManager.cpp"), 0x49, std::string("")).stream()
            << "Event " << id << " in cat " << cat << " already registed as " << it->second;
        return false;
    }
    events.insert(std::make_pair(id, std::string(name)));
    return true;
}

} }

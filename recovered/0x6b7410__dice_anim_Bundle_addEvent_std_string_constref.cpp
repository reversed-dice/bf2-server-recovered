// FUNCTION: BF2 0x6b7410
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <list>

namespace dice { namespace hfe { void setLowerCase(std::string& s); } }

namespace dice { namespace anim {

class Bundle {
public:
    struct BundleEvent {
        BundleEvent(const std::string& text);
        std::string m_text;
        int m_id;
        int m_type;
    };

    struct EventEntry {
        EventEntry(int flag, BundleEvent const& ev) : m_flag(flag), m_event(ev) {}
        int m_flag;
        BundleEvent m_event;
    };

private:
    char _pad[0x10];
    std::list<EventEntry>* m_pEvents;

public:
    void addEvent(std::string const& name);
    void init();
};

void Bundle::addEvent(std::string const& name) {
    m_pEvents->push_back(EventEntry(0, BundleEvent(name)));
    init();
}

} }

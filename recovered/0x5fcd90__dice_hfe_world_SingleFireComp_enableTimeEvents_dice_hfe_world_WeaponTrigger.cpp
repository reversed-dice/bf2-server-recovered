// FUNCTION: BF2 0x5fcd90
// BF2_FLAGS: -fno-tree-ter
#include <vector>

namespace dice { namespace hfe { namespace world {

struct TimeEvent {
    int id;
    int trigger;
    int pad8;
    int pad12;
};

struct Template {
    char pad[0x90];
    std::vector<TimeEvent> m_timeEvents;
};

class SingleFireComp {
public:
    char pad[0x16d];
    char m_timeEventsEnabled[1];
    char pad2[0x188 - 0x16e];
    Template* m_template;

    void enableTimeEvents(int trigger);
};

void SingleFireComp::enableTimeEvents(int trigger)
{
    for (std::vector<TimeEvent>::const_iterator it = m_template->m_timeEvents.begin();
         it != m_template->m_timeEvents.end(); ++it) {
        if (it->trigger == trigger) {
            m_timeEventsEnabled[it->id] = 1;
        }
    }
}

} } }

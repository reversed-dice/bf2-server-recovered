// FUNCTION: BF2 0x7ec250
#include <map>
namespace dice { namespace hfe { namespace io {

struct TriggerRemap { int a; };
struct AxisRemap { int a; };

class ControlMap {
public:
    void removeMapping(unsigned int id);
    char _pad0[0x20];
    std::map<int, AxisRemap*> m_axes;
    std::map<int, TriggerRemap*> m_triggers;
};

void ControlMap::removeMapping(unsigned int id)
{
    std::map<int, TriggerRemap*>::iterator t = m_triggers.find(id);
    if (t != m_triggers.end()) {
        TriggerRemap* r = t->second;
        m_triggers.erase(id);
        delete r;
        return;
    }
    std::map<int, AxisRemap*>::iterator a = m_axes.find(id);
    if (a != m_axes.end()) {
        AxisRemap* r = a->second;
        m_axes.erase(id);
        delete r;
    }
}

} } }

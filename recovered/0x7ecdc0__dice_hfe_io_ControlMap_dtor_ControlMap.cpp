// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7ecdc0

#include <string>
#include <map>
#include <vector>

namespace dice {
namespace hfe {
namespace io {

struct AxisRemap { };
struct TriggerRemap { };
struct TriggerMapping { };

class ControlMap {
public:
    virtual ~ControlMap();
private:
    char _pad0x08[0x08];
    std::string m_name;
    char _pad0x18[0x08];
    std::map<int, AxisRemap*> m_axisMap;
    std::map<int, TriggerRemap*> m_triggerMap;
    char _pad0x80[0x30];
    std::vector<TriggerMapping*> m_mappings;
};

ControlMap::~ControlMap()
{
    for (std::map<int, AxisRemap*>::const_iterator it = m_axisMap.begin(); it != m_axisMap.end(); ++it)
        delete it->second;
    for (std::map<int, TriggerRemap*>::const_iterator it = m_triggerMap.begin(); it != m_triggerMap.end(); ++it)
        delete it->second;
    m_axisMap.clear();
    m_triggerMap.clear();
    for (unsigned int i = 0; i < m_mappings.size(); ++i)
        delete m_mappings[i];
    TriggerMapping* pMapping = 0;
    if (m_mappings.size() != 0)
        m_mappings.erase(m_mappings.begin(), m_mappings.end());
    else
        m_mappings.insert(m_mappings.end(), 0, pMapping);
}

} }
}

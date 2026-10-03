// FUNCTION: BF2 0x7f1790
#include <map>
namespace dice { namespace hfe { namespace io {

class IControlMap;

class ControlMapManager {
public:
    IControlMap* getControlMap(int id) const;
    char _pad0[0x10];
    std::map<int, IControlMap*> m_maps;
};

IControlMap* ControlMapManager::getControlMap(int id) const
{
    std::map<int, IControlMap*>::const_iterator it = m_maps.find(id);
    if (it == m_maps.end())
        return 0;
    return it->second;
}

} } }

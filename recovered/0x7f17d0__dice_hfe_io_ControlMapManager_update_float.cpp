// FUNCTION: BF2 0x7f17d0
#include <map>
namespace dice { namespace hfe { namespace io {

typedef void (*VF)(void*, float);

class ControlMapManager {
public:
    char pad18[0x10];
    std::map<int, void*> m_map;
    void update(float dt);
};

void ControlMapManager::update(float dt)
{
    std::map<int, void*>::iterator it = m_map.begin();
    for (; it != m_map.end(); ++it)
        ((VF*)(*(void***)it->second))[0xf8 / 8](it->second, dt);
}

} } }

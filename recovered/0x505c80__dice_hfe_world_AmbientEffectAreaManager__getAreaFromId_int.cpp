// FUNCTION: BF2 0x505c80
#include <map>

namespace dice { namespace hfe { namespace world {

class AmbientEffectAreaManager {
public:
    void* getAreaFromId(int id);
};

void* AmbientEffectAreaManager::getAreaFromId(int id) {
    typedef std::map<int, void*> Map;
    Map& m = *reinterpret_cast<Map*>(reinterpret_cast<char*>(this) + 0x30);
    Map::iterator it = m.find(id);
    void* result = 0;
    if (m.end() != it) {
        result = it->second;
    }
    return result;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_AmbientEffectAreaManager::getAreaFromId_int (0x505c80)
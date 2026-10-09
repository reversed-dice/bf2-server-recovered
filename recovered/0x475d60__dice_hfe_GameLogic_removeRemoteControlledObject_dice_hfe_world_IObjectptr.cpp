// FUNCTION: BF2 0x475d60
#include <map>

namespace dice { namespace hfe {
namespace world {
class IObject {};

class ArtilleryManager {
public:
    static ArtilleryManager* m_instance;
    void refresh();
};
}

class GameLogic {
public:
    char _pad[0x290];
    std::map<unsigned int, world::IObject*> m_remoteControlledObjects; // +0x290

    void removeRemoteControlledObject(world::IObject* obj);
};

void GameLogic::removeRemoteControlledObject(world::IObject* obj)
{
    unsigned int id = *(unsigned int*)((char*)obj + 0x248);
    std::map<unsigned int, world::IObject*>::iterator it = m_remoteControlledObjects.find(id);
    if (it != m_remoteControlledObjects.end()) {
        m_remoteControlledObjects.erase(it);
    }
    if (*(int*)(*(char**)((char*)obj + 0x28) + 0x1f8) == 1) {
        if (world::ArtilleryManager::m_instance != 0) {
            world::ArtilleryManager::m_instance->refresh();
        }
    }
}

} }

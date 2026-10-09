// FUNCTION: BF2 0x476e00
#include <map>

namespace dice { namespace hfe {
namespace world {
class IObject {
public:
    char _pad[0x20];
    unsigned int m_id;
};
}

class GameLogic {
public:
    char _pad[0x170];
    std::map<unsigned int, world::IObject*> m_flags;           // +0x170
    std::map<unsigned int, world::IObject*> m_objectSpawners;  // +0x1a0
    std::map<unsigned int, world::IObject*> m_supplyDepots;    // +0x1d0
    std::map<unsigned int, world::IObject*> m_pcos;            // +0x200
    std::map<unsigned int, world::IObject*> m_projectiles;     // +0x230

    void removePco(world::IObject* obj);
};

void GameLogic::removePco(world::IObject* obj)
{
    unsigned int id = obj->m_id;
    std::map<unsigned int, world::IObject*>::iterator it = m_pcos.find(id);
    if (it != m_pcos.end()) {
        m_pcos.erase(it);
    }
}

} }

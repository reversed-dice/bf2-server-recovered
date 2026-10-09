// FUNCTION: BF2 0x4833d0
#include <map>

namespace dice { namespace hfe {
namespace world {
class IObject {};
class TargetObject : public IObject {
public:
    unsigned int getTargetObjectId();
};
}

class GameLogic {
public:
    char _pad[0x260];
    std::map<unsigned int, world::IObject*> m_targetObjects; // +0x260

    void removeTargetObject(world::IObject* obj);
};

void GameLogic::removeTargetObject(world::IObject* obj)
{
    unsigned int id = static_cast<world::TargetObject*>(obj)->getTargetObjectId();
    std::map<unsigned int, world::IObject*>::iterator it = m_targetObjects.find(id);
    if (it != m_targetObjects.end()) {
        m_targetObjects.erase(it);
    }
}

} }

// FUNCTION: BF2 0x476ff0
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

    void addTargetObject(world::IObject* obj);
};

void GameLogic::addTargetObject(world::IObject* obj)
{
    unsigned int id = static_cast<world::TargetObject*>(obj)->getTargetObjectId();
    m_targetObjects.insert(std::make_pair(id, obj));
}

} }

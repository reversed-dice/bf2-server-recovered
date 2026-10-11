// FUNCTION: BF2 0x68cf00
#include <map>

namespace dice {
namespace hfe {
namespace world {

class IObject {
public:
    char m_pad[0x20];
    unsigned int m_id;
};

class ObjectManager {
public:
    void addObjectToUpdate(IObject* object);
private:
    char m_pad0[0x88];
    std::map<unsigned int, IObject*> m_updateObjects;
};

void ObjectManager::addObjectToUpdate(IObject* object)
{
    unsigned int id = object->m_id;
    m_updateObjects[id] = object;
}

}
}
}

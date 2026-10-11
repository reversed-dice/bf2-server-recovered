// FUNCTION: BF2 0x68df60
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
    void registerObject(IObject* object);
private:
    char m_pad0[0x158];
    std::map<unsigned int, IObject*> m_objects;
};

void ObjectManager::registerObject(IObject* object)
{
    unsigned int id = object->m_id;
    m_objects[id] = object;
}

}
}
}

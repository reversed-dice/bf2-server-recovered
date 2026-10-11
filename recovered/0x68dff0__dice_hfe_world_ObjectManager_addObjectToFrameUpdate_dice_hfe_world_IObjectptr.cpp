// FUNCTION: BF2 0x68dff0
// BF2_FLAGS: -fno-strict-aliasing
#include <map>
#include <vector>

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
    void addObjectToFrameUpdate(IObject* object);
private:
    char m_pad0[0xb8];
    std::map<unsigned int, IObject*> m_frameObjects;
    char m_pad1[0x18];
    bool m_flag;
    char m_pad2[7];
    std::vector<IObject*> m_frameList;
};

void ObjectManager::addObjectToFrameUpdate(IObject* object)
{
    if (m_flag != 0)
    {
        m_frameList.push_back(object);
    }
    else
    {
        unsigned int id = object->m_id;
        m_frameObjects[id] = object;
    }
}

}
}
}

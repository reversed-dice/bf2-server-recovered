// FUNCTION: BF2 0x549190
// BF2_COMPILER: gcc-4.0
// BF2_FLAGS: -fcrossjumping
#include <list>

namespace dice { namespace hfe { namespace world {

class IObject;

class Soldier {
public:
    char _pad[0x360];
    std::list<IObject*> m_playerInputObjects;

    void addPlayerInputObject(IObject* obj);
};

void Soldier::addPlayerInputObject(IObject* obj) {
    for (std::list<IObject*>::iterator it = m_playerInputObjects.begin();
         it != m_playerInputObjects.end(); ++it) {
        if (*it == obj)
            return;
    }
    m_playerInputObjects.push_back(obj);
}

} } }

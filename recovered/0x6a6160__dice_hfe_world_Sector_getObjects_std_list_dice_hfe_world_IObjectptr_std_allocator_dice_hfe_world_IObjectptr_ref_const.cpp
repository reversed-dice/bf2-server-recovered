// FUNCTION: BF2 0x6a6160
#include <list>
#include <set>

class IObject;

class Sector {
public:
    char _pad0[0x10];
    std::set<IObject*> m_objects;
    void getObjects(std::list<IObject*>& out) const;
};

void Sector::getObjects(std::list<IObject*>& out) const {
    for (std::set<IObject*>::const_iterator it = m_objects.begin(); it != m_objects.end(); ++it)
        out.push_back(*it);
}

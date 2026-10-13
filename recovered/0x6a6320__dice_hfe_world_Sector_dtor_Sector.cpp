// FUNCTION: BF2 0x6a6320
#include <set>
#include <vector>

namespace dice { namespace hfe { namespace world {

class IObject;
class IPortalEventCallback;

class ISector {
public:
    virtual ~ISector() {}
};

struct Entry {
    std::set<IPortalEventCallback*> m_callbacks;
};

class Sector : public ISector {
public:
    virtual ~Sector();
    void* m_8;
    std::set<IObject*> m_objects;
    std::vector<Entry*> m_entries;
};

Sector::~Sector() {
    for (std::vector<Entry*>::iterator it = m_entries.begin(); it != m_entries.end(); ++it)
        delete *it;
}

}}}

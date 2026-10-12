// FUNCTION: BF2 0x43bd30
#include <list>

namespace dice { namespace hfe {

namespace io {
class NetworkableDescriptor;

struct InnerItem {
    char pad[8];
    io::NetworkableDescriptor* desc;
};

class NetworkManager {
public:
    std::list<std::list<InnerItem> > const& getScopableRootDescriptors();
};
extern NetworkManager* networkManager;
}

class GhostManager {
public:
    void ghostObject(io::NetworkableDescriptor* desc, float prio, bool force);
};

class ServerConnection {
public:
    void getAllObjects();

    char pad[0x40];
    GhostManager* m_ghostManager;
};

void ServerConnection::getAllObjects()
{
    typedef std::list<std::list<io::InnerItem> > OuterList;
    typedef std::list<io::InnerItem> InnerList;

    OuterList const& roots = io::networkManager->getScopableRootDescriptors();
    for (OuterList::const_iterator oit = roots.begin(); oit != roots.end(); ++oit) {
        InnerList const& inner = *oit;
        for (InnerList::const_iterator iit = inner.begin(); iit != inner.end(); ++iit) {
            m_ghostManager->ghostObject(iit->desc, 1.0f, false);
        }
    }
}

} }

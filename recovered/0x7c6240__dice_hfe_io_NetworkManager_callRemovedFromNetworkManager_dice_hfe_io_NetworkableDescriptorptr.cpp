// FUNCTION: BF2 0x7c6240
#include <vector>
namespace dice { namespace hfe { namespace io {

class INetworkable {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8)
#undef V
    virtual void removedFromNetworkManager();
};

class NetworkableDescriptor {
public:
    char _pad0[0x10];
    std::vector<std::vector<INetworkable*> > m_networkables;
};

class NetworkManager {
public:
    void callRemovedFromNetworkManager(NetworkableDescriptor* d);
};

void NetworkManager::callRemovedFromNetworkManager(NetworkableDescriptor* d)
{
    if (!d)
        return;
    for (std::vector<std::vector<INetworkable*> >::iterator i = d->m_networkables.begin(); i != d->m_networkables.end(); ++i)
        for (std::vector<INetworkable*>::iterator j = i->begin(); j != i->end(); ++j)
            (*j)->removedFromNetworkManager();
}

} } }

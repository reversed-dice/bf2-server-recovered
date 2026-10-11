// FUNCTION: BF2 0x7c62e0
#include <vector>

namespace dice { namespace hfe { namespace io {

class INetworkable {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void addedToNetworkManager();
};

class NetworkableDescriptor {
public:
    char _pad0[0x10];
    std::vector<std::vector<INetworkable*> > m_networkables;
};

class NetworkManager {
public:
    void callAddedToNetworkManager(NetworkableDescriptor* desc);
};

void NetworkManager::callAddedToNetworkManager(NetworkableDescriptor* desc) {
    if (!desc) return;
    typedef std::vector<std::vector<INetworkable*> > OuterVec;
    typedef std::vector<INetworkable*> InnerVec;
    for (OuterVec::iterator it = desc->m_networkables.begin(); it != desc->m_networkables.end(); ++it) {
        for (InnerVec::iterator it2 = it->begin(); it2 != it->end(); ++it2) {
            (*it2)->addedToNetworkManager();
        }
    }
}

} } }

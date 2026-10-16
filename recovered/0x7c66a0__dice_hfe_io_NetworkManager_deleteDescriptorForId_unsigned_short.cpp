// FUNCTION: BF2 0x7c66a0
// BF2_FLAGS: -fno-reorder-blocks
#include <map>
#include <vector>

namespace dice { namespace hfe {

class IBase {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual IBase* queryInterface(unsigned int iid) const;
};

namespace io { class NetworkableDescriptor; }

class IGameServer : public IBase {
public:
    virtual void v4();
    virtual void v5(io::NetworkableDescriptor* d);
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void changePlayerName(unsigned char id, const std::string& name);
};

extern IBase* game;
extern const unsigned int IID_IGameServer;

namespace world { class IObject; }

namespace io {

struct DSElem {
    void* m_p;
    char _pad[0x10];
    ~DSElem();
};

inline DSElem::~DSElem() { if (m_p) ::operator delete(m_p); }

class NetworkableDescriptor {
public:
    char _pad[0x10];
    std::vector<DSElem> m_list;   // +0x10
};

struct HashNode {
    HashNode* m_next;      // +0
    unsigned int m_id;     // +0x8
    void* m_value;         // +0x10
};

class NetworkManager {
public:
    NetworkableDescriptor* getDescriptor(unsigned short id);
    void callRemovedFromNetworkManager(NetworkableDescriptor* d);
    void deleteDescriptorForId(unsigned short id);

    char _pad0[0x8];
    std::map<unsigned short, world::IObject*> m_objects;            // +0x8
    char _pad01[0x8];
    std::map<unsigned short, NetworkableDescriptor*> m_descriptors; // +0x40
    HashNode** m_buckets;        // +0x70
    unsigned int m_bucketCount;  // +0x78
    char _pad1[0xc];             // -> +0x88
    std::map<unsigned short, NetworkableDescriptor*> m_m1;          // +0x88
    std::map<unsigned short, NetworkableDescriptor*> m_m2;          // +0xb8
    std::map<unsigned short, NetworkableDescriptor*> m_m3;          // +0xe8
};

void NetworkManager::deleteDescriptorForId(unsigned short id)
{
    NetworkableDescriptor* d = getDescriptor(id);
    m_objects.erase(id);
    m_descriptors.erase(id);

    HashNode** prev = &m_buckets[(unsigned int)id % m_bucketCount];
    HashNode* curr = *prev;
    if (__builtin_expect(curr != 0, 1)) {
        while (curr->m_id != id) {
            prev = &curr->m_next;
            curr = curr->m_next;
            if (!curr) goto done;
        }
        *prev = curr->m_next;
        delete curr;
    }
done:
    m_m1.erase(id);
    m_m2.erase(id);
    if (game != 0) {
        IGameServer* gs = static_cast<IGameServer*>(game->queryInterface(IID_IGameServer));
        if (gs != 0)
            gs->v5(d);
    }
    m_m3.erase(id);
    if (d != 0) {
        callRemovedFromNetworkManager(d);
        delete d;
    }
}

} } }

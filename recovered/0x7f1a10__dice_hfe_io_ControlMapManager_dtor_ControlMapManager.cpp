// FUNCTION: BF2 0x7f1a10
// BF2_FLAGS: -fno-strict-aliasing
#include <map>
#include <string>

namespace dice { namespace hfe { namespace io {

class IControlMap;

struct Node {
    Node* next;
    std::string key;
};

class BucketList {
public:
    Node** m_buckets;
    unsigned int m_count;
    ~BucketList() {
        for (unsigned int i = 0; i < m_count; ++i) {
            Node* p = m_buckets[i];
            while (p) {
                Node* n = p->next;
                delete p;
                p = n;
            }
            m_buckets[i] = 0;
        }
        delete[] m_buckets;
    }
};

class ControlMapManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual ~ControlMapManager();
private:
    char pad0[0x10 - 8];
    std::map<int, IControlMap*> m_maps;
    char pad1[0x48 - 0x40];
    BucketList m_hash;
};

ControlMapManager::~ControlMapManager() {
}

} } }

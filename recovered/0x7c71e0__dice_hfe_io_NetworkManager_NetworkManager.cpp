// FUNCTION: BF2 0x7c71e0
// BF2_FLAGS: -fno-strict-aliasing
#include <list>
#include <map>
#include <utility>
#include <vector>

namespace dice { namespace hfe { namespace io {

class INetworkableObject;
class NetworkableDescriptor;

struct Hash {
    void** m_buckets;                                       // 0x00
    unsigned int m_numBuckets;                              // 0x08
    unsigned int _pad;                                      // 0x0c
    void* m_end;                                            // 0x10
    Hash();
    ~Hash();
};

inline Hash::Hash() {
    char dummy;
    m_numBuckets = 0x1000;
    m_end = &dummy;
    m_buckets = new void*[m_numBuckets];
    unsigned int i = 0;
    while (i < m_numBuckets) {
        m_buckets[i] = 0;
        ++i;
    }
}

inline Hash::~Hash() {
    if (m_numBuckets != 0) {
        unsigned int i = 0;
        do {
            void* p = m_buckets[i];
            while (p != 0) {
                void* n = *(void**)p;
                operator delete(p);
                p = n;
            }
            m_buckets[i] = 0;
        } while (++i < m_numBuckets);
    }
    if (m_buckets != 0) {
        operator delete[](m_buckets);
    }
}

struct T38 {
    char _pad[0x38];
    ~T38() {}
};

typedef std::list<std::pair<INetworkableObject*, NetworkableDescriptor*> > InnerList;

class NetworkManager {
public:
    NetworkManager();
    virtual ~NetworkManager();

private:
    std::map<unsigned short, void*> m_m08;                  // 0x08
    unsigned short m_38;                                    // 0x38
    unsigned short m_3a;                                    // 0x3a
    unsigned int _padA;                                     // 0x3c
    std::map<unsigned short, NetworkableDescriptor*> m_m40; // 0x40
    Hash m_hash70;                                          // 0x70
    std::map<unsigned short, NetworkableDescriptor*> m_m88; // 0x88
    std::map<unsigned short, NetworkableDescriptor*> m_mb8; // 0xb8
    std::map<unsigned short, NetworkableDescriptor*> m_me8; // 0xe8
    int m_118;                                              // 0x118
    int m_11c;                                              // 0x11c
    int m_120;                                              // 0x120
    char m_124;                                             // 0x124
    char _pad3[3];                                          // 0x125
    std::map<int, void*> m_m128;                            // 0x128
    int m_158;                                              // 0x158
    int m_15c;                                              // 0x15c
    std::vector<T38> m_v160;                                // 0x160
    std::list<InnerList> m_l178;                            // 0x178
};

NetworkManager::NetworkManager()
    : m_118(100), m_11c(0x4b0), m_120(1), m_124(0), m_158(0), m_15c(0) {
    m_m08.clear();
    m_3a = 1;
    m_38 = 0x282;
    void* em = *(void**)0x10b3730;
    ((void (*)(void*, int, void*, int))(*(void***)em)[11])(em, 5, this, 0);
}

} } }

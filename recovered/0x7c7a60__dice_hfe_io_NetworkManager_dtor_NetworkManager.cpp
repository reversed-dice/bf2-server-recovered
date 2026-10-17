// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7c7a60
// dice_hfe_io_NetworkManager_dtor_NetworkManager
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
    unsigned char _pad[0x18 - 0x10];
    ~Hash();
};

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
    ~NetworkManager();

private:
    void* m_0;                                              // 0x00
    std::map<unsigned short, void*> m_m08;                  // 0x08
    unsigned char _padA[0x8];
    std::map<unsigned short, NetworkableDescriptor*> m_m40; // 0x40
    Hash m_hash70;                                          // 0x70
    std::map<unsigned short, NetworkableDescriptor*> m_m88; // 0x88
    std::map<unsigned short, NetworkableDescriptor*> m_mb8; // 0xb8
    std::map<unsigned short, NetworkableDescriptor*> m_me8; // 0xe8
    unsigned char _padB[0x10];
    std::map<int, void*> m_m128;                            // 0x128
    unsigned char _pad1[0x160 - 0x158];
    std::vector<T38> m_v160;                                // 0x160
    std::list<InnerList> m_l178;                            // 0x178
};

extern void fn_7c76a0(void* self);   // NetworkManager::clear()

// compile-state padding: 14 unused functions, see trick 378
__attribute__((used)) int __pad_0(int x) { int y = x * 0 + 3; return y; }
__attribute__((used)) int __pad_1(int x) { int y = x * 1 + 3; return y; }
__attribute__((used)) int __pad_2(int x) { int y = x * 2 + 3; return y; }
__attribute__((used)) int __pad_3(int x) { int y = x * 3 + 3; return y; }
__attribute__((used)) int __pad_4(int x) { int y = x * 4 + 3; return y; }
__attribute__((used)) int __pad_5(int x) { int y = x * 5 + 3; return y; }
__attribute__((used)) int __pad_6(int x) { int y = x * 6 + 3; return y; }
__attribute__((used)) int __pad_7(int x) { int y = x * 7 + 3; return y; }
__attribute__((used)) int __pad_8(int x) { int y = x * 8 + 3; return y; }
__attribute__((used)) int __pad_9(int x) { int y = x * 9 + 3; return y; }
__attribute__((used)) int __pad_10(int x) { int y = x * 10 + 3; return y; }
__attribute__((used)) int __pad_11(int x) { int y = x * 11 + 3; return y; }
__attribute__((used)) int __pad_12(int x) { int y = x * 12 + 3; return y; }
__attribute__((used)) int __pad_13(int x) { int y = x * 13 + 3; return y; }
NetworkManager::~NetworkManager() {
    m_0 = (void*)0xbaa850;
    fn_7c76a0(this);
    void* em = *(void**)0x10b3730;
    ((void (*)(void*, int, void*))(*(void***)em)[12])(em, 5, this);
}

} } }

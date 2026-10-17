// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4b6150
#include <map>

namespace dice {
namespace hfe {
namespace world {

class IMaterial;

struct MNode {
    MNode* next;
};

class MTable {
public:
    MNode** m_buckets;
    unsigned int m_count;

    ~MTable()
    {
        for (unsigned int i = 0; i < m_count; ++i) {
            MNode* p = m_buckets[i];
            while (p) {
                MNode* n = p->next;
                delete p;
                p = n;
            }
            m_buckets[i] = 0;
        }
        if (m_buckets) {
            operator delete[](m_buckets);
        }
    }
};

class MaterialManager {
public:
    virtual ~MaterialManager();
    virtual void removeAll();
private:
    char pad0[8];
    std::map<unsigned int, IMaterial*> m_materials;
    char pad1[0x10];
    MTable m_table;
};

// compile-state padding: 7 unused functions, see trick 378
__attribute__((used)) int __pad_0(int x) { int y = x * 0 + 3; return y; }
__attribute__((used)) int __pad_1(int x) { int y = x * 1 + 3; return y; }
__attribute__((used)) int __pad_2(int x) { int y = x * 2 + 3; return y; }
__attribute__((used)) int __pad_3(int x) { int y = x * 3 + 3; return y; }
__attribute__((used)) int __pad_4(int x) { int y = x * 4 + 3; return y; }
__attribute__((used)) int __pad_5(int x) { int y = x * 5 + 3; return y; }
__attribute__((used)) int __pad_6(int x) { int y = x * 6 + 3; return y; }
MaterialManager::~MaterialManager()
{
    removeAll();
}

}
}
}

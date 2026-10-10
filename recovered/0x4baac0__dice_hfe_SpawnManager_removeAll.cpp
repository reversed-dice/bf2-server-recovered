// FUNCTION: BF2 0x4baac0
// BF2_FLAGS: -fno-strict-aliasing
#include <set>
#include <map>
#include <utility>

namespace dice { namespace hfe {

class SpawnGroup;

class SpawnManager {
public:
    virtual void s0();
    virtual void s1();
    virtual void s2();
    virtual void s3();
    virtual void s4();
    virtual void s5();
    virtual void s6();
    virtual void s7();
    virtual void s8();
    virtual void s9();
    virtual void s10();
    virtual void s11();
    virtual void s12();
    virtual void s13();
    virtual void s14();
    virtual void s15();
    virtual void s16();
    virtual void s17();
    virtual void s18();
    virtual void s19();
    virtual void s20();
    char _pad0[0x18];
    std::map<int, SpawnGroup*> m_groups;
    int m_flag;
    std::map<std::pair<int, int>, int> m_map;
    void _removeGroup(int, bool);
    void removeAll();
};

void SpawnManager::removeAll()
{
    while (m_groups.begin() != m_groups.end())
    {
        _removeGroup(m_groups.begin()->first, true);
    }
    m_map.clear();
    m_flag = 1;
}

} }

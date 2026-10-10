// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4c0770
#include <map>
#include <list>

namespace dice { namespace hfe {

class Squad {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
};

class Team {
public:
    void removeAllSquads();
private:
    char pad[8];
    std::map<unsigned char, Squad*> m_squads;
    std::list<Squad*> m_list;
};

void Team::removeAllSquads()
{
    for (std::map<unsigned char, Squad*>::iterator it = m_squads.begin(); it != m_squads.end(); ++it) {
        if (it->second)
            it->second->v11();
    }
    m_squads.clear();
    m_list.clear();
}

} }

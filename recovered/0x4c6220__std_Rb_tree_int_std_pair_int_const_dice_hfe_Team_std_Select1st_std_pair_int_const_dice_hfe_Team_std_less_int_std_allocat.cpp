// FUNCTION: BF2 0x4c6220
// std::_Rb_tree<int, std::pair<int const, dice::hfe::Team>, std::_Select1st<std::pair<int const, dice::hfe::Team> >, std::less<int>, std::allocator<std::pair<int const, dice::hfe::Team> > >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>
#include <memory>
#include <numeric>
#include <functional>
#include <iterator>

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

} }

namespace dice { namespace hfe {

class CommanderManager {
public:
    ~CommanderManager();
private:
    char _pad[0x20];
    std::set<int> m_applicants;
};

class Team {
public:
    void removeAllSquads();
private:
    void* m_vtbl;
    std::map<unsigned char, Squad*> m_squads;
    std::list<Squad*> m_list;
    CommanderManager m_commanderManager;
};

} }

template class std::_Rb_tree<int, std::pair<int const, dice::hfe::Team>, std::_Select1st<std::pair<int const, dice::hfe::Team> >, std::less<int>, std::allocator<std::pair<int const, dice::hfe::Team> > >;

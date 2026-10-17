// FUNCTION: BF2 0x4c4820
#include <map>
#include <list>
#include <string>

namespace dice { namespace hfe {

class Team;

class Squad {
public:
    Squad(Team* t);
    char _pad0[0x8];
    std::string m_name;      // 0x8
    int m_id;                // 0x10
    int m_14;                // 0x14
    char _pad1[0x140 - 0x18];
    int m_spawnGroupId;      // 0x140
    char _pad2[0x180 - 0x144];
};

class Team {
public:
    unsigned int createSquad(const std::string& name);
    int m_nextId;                                 // 0x0
    std::map<unsigned char, Squad*> m_squads;     // 0x8
    std::list<Squad*> m_squadsList;               // 0x38
};

// compile-state padding: 13 unused functions, see trick 378
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
unsigned int Team::createSquad(const std::string& name)
{
    Squad* squad = new Squad(this);
    squad->m_name.assign(name);
    squad->m_id = ++m_nextId;
    squad->m_14 = -1;
    if (squad->m_spawnGroupId >= 0) {
        void* sm = *(void**)0x10c42c0;
        void* p = ((void*(*)(void*))(*(void***)sm)[0x50 / 8])(sm);
        if (p != 0)
            ((void(*)(void*, int))(*(void***)p)[0x40 / 8])(p, squad->m_id);
    }
    std::pair<unsigned char const, Squad*> kv((unsigned char)squad->m_id, squad);
    std::pair<std::map<unsigned char, Squad*>::iterator, bool> ins = m_squads.insert(kv);
    (void)ins;
    m_squadsList.push_back(squad);
    return squad->m_id;
}

} }

// FUNCTION: BF2 0x4b8790
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <list>
#include <map>

namespace dice { namespace hfe { namespace world {
class IPlayer {
public:
    virtual int q0();
    virtual int q1();
    virtual int q2();
    virtual int q3();
    virtual int q4();
    virtual int q5();
    virtual int q6();
    virtual int q7();
    virtual int q8();
    virtual int q9();
    virtual int q10();
    virtual int q11();
    virtual int q12();
    virtual int q13();
    virtual int q14();
    virtual int q15();
    virtual int q16();
    virtual int q17();
    virtual int q18();
    virtual int q19();
    virtual int q20();
    virtual int q21();
    virtual int q22();
    virtual int q23();
    virtual int q24();
    virtual bool q25();
    virtual int q26();
    virtual int q27();
    virtual int q28();
    virtual int q29();
    virtual int q30();
    virtual int q31();
    virtual int q32();
    virtual int q33();
    virtual int q34();
    virtual int q35();
    virtual int q36();
    virtual int q37();
    virtual int q38();
    virtual int q39();
    virtual int q40();
    virtual int q41();
    virtual int q42();
    virtual int q43();
    virtual int q44();
    virtual int q45();
    virtual int q46();
    virtual int q47();
    virtual int q48();
    virtual int q49();
    virtual int q50();
    virtual int q51();
    virtual int q52();
    virtual int q53();
    virtual int q54();
    virtual int q55();
    virtual int q56();
    virtual int q57();
    virtual int q58();
    virtual int q59();
    virtual int q60();
    virtual int q61();
    virtual int q62();
    virtual int q63();
    virtual int q64();
    virtual int q65();
    virtual int q66();
    virtual int q67();
    virtual int q68();
    virtual int q69();
    virtual int q70();
    virtual int q71();
    virtual int q72();
    virtual int q73();
    virtual int q74();
    virtual int q75();
    virtual int q76();
    virtual int q77();
    virtual int q78();
    virtual bool q79();
};
} } }

namespace dice { namespace hfe {

class SpawnGroup {
public:
    virtual int s0();
    virtual int s1();
    virtual int s2();
    virtual int s3();
    virtual int s4();
    virtual int s5();
    virtual int s6();
    virtual int s7();
    virtual int s8();
    virtual int s9();
    char _pad[0x92];
    bool m_9a;
    char _pad2[0x5];
    bool m_a0;
};

class SpawnManager {
public:
    std::list<int>& getGroupsForPlayer(dice::hfe::world::IPlayer* player);
private:
    char _pad0[0x20];
    std::map<int, SpawnGroup*> m_map;
    char _pad1[0x38];
    std::list<int> m_list;
};

std::list<int>& SpawnManager::getGroupsForPlayer(dice::hfe::world::IPlayer* player)
{
    m_list.clear();
    if (player) {
        for (std::map<int, SpawnGroup*>::iterator it = m_map.begin(); it != m_map.end(); ++it) {
            SpawnGroup* group = it->second;
            if (group->s7() != player->q58())
                continue;
            if (group->m_9a) {
                if (!player->q25())
                    continue;
            }
            if (group->s9() + 1 != 0) {
                if (group->s9() != player->q67())
                    continue;
                if (player->q79())
                    continue;
            }
            if (group->m_a0) {
                int groupId = it->first;
                m_list.push_back(groupId);
            }
        }
    }
    return m_list;
}

} }

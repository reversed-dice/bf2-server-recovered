// FUNCTION: BF2 0xa7e440
#include <string>
#include <vector>

// dice_hfe_ModuleGame_getClassList_std_vector_dice_hfe_ClassRegInfo_std_allocator_dice_hfe_ClassRegInfo_ref
// One registration per class. Both the ClassRegInfo and its name string are
// unnamed temporaries: with a named string per block GCC assigns the name
// slots in the reverse order the target uses.

namespace dice { namespace hfe {

struct ClassRegInfo {
    unsigned int id;
    std::string name;
    // Typed ClassRegInfo* on purpose, not void*: it puts this store in the
    // same TBAA alias set as the _M_finish load, which is what stops sched2
    // hoisting that load over it (see patterns/module_getclasslist).
    ClassRegInfo* factory;
    ClassRegInfo(unsigned int i, const std::string& n, ClassRegInfo* f)
        : id(i), name(n), factory(f) {}
};

struct Module_a7e440 {
    void getClassList(std::vector<ClassRegInfo>& list);
};

void Module_a7e440::getClassList(std::vector<ClassRegInfo>& list) {
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c75fcc, std::string("dice.hfe.StatsManager"), (ClassRegInfo*)0xa82bf0));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c75f9c, std::string("dice.hfe.PlayerStatsManager"), (ClassRegInfo*)0xa82c60));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c75f30, std::string("dice.hfe.PlayerAwards"), (ClassRegInfo*)0xa82cd0));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c75f38, std::string("dice.hfe.PlayerStats"), (ClassRegInfo*)0xa82db0));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c75f20, std::string("dice.hfe.PlayerUnlocks"), (ClassRegInfo*)0xa82d40));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c75f40, std::string("dice.hfe.SearchForPlayer"), (ClassRegInfo*)0xa82e20));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c75f28, std::string("dice.hfe.LeaderBoard"), (ClassRegInfo*)0xa82e90));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c75ef8, std::string("dice.hfe.PlayerUnlockInfo"), (ClassRegInfo*)0xa82f00));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c75ef0, std::string("dice.hfe.PlayerRankInfo"), (ClassRegInfo*)0xa82f70));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c75f18, std::string("dice.hfe.ModInfo"), (ClassRegInfo*)0xa82fe0));
}

} }
// REVERSED_FUNCTION: dice_hfe_ModuleGame_getClassList_std_vector_dice_hfe_ClassRegInfo_std_allocator_dice_hfe_ClassRegInfo_ref (0xa7e440)

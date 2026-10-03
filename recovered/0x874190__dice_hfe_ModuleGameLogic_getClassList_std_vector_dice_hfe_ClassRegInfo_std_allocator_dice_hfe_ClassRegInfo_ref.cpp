// FUNCTION: BF2 0x874190
#include <string>
#include <vector>

// dice_hfe_ModuleGameLogic_getClassList_std_vector_dice_hfe_ClassRegInfo_std_allocator_dice_hfe_ClassRegInfo_ref
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

struct Module_874190 {
    void getClassList(std::vector<ClassRegInfo>& list);
};

void Module_874190::getClassList(std::vector<ClassRegInfo>& list) {
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c76030, std::string("dice.bf.SquadManager"), (ClassRegInfo*)0x878d80));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c7602c, std::string("dice.bf.ClientSquadManager"), (ClassRegInfo*)0x878df0));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c76058, std::string("dice.bf.clientGameLogic"), (ClassRegInfo*)0x878d10));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c76054, std::string("dice.bf.serverGameLogic"), (ClassRegInfo*)0x878ca0));
}

} }
// REVERSED_FUNCTION: dice_hfe_ModuleGameLogic_getClassList_std_vector_dice_hfe_ClassRegInfo_std_allocator_dice_hfe_ClassRegInfo_ref (0x874190)

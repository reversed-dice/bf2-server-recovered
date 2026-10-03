// FUNCTION: BF2 0xa1ff90
#include <string>
#include <vector>

// dice_hfe_world_GameLogicCompModule_getClassList_std_vector_dice_hfe_ClassRegInfo_std_allocator_dice_hfe_ClassRegInfo_ref
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

struct Module_a1ff90 {
    void getClassList(std::vector<ClassRegInfo>& list);
};

void Module_a1ff90::getClassList(std::vector<ClassRegInfo>& list) {
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c75e78, std::string("dice.hfe.world.TemplateComponent.Armor"), (ClassRegInfo*)0xa24ef0));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c75e58, std::string("dice.hfe.world.TemplateComponent.Ability"), (ClassRegInfo*)0xa24f60));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c75e48, std::string("dice.hfe.world.TemplateComponent.Radio"), (ClassRegInfo*)0xa24fd0));
}

} }
// REVERSED_FUNCTION: dice_hfe_world_GameLogicCompModule_getClassList_std_vector_dice_hfe_ClassRegInfo_std_allocator_dice_hfe_ClassRegInfo_ref (0xa1ff90)

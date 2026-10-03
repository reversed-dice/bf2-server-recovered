// FUNCTION: BF2 0xabb780
#include <string>
#include <vector>

namespace dice { namespace hfe {

struct ClassRegInfo {
    unsigned int id;
    std::string name;
    // Typed ClassRegInfo* on purpose, not void*: it puts this store in the
    // same TBAA alias set as the _M_finish load below, which is what stops
    // sched2 hoisting that load over it. See this module's docstring.
    ClassRegInfo* factory;
    ClassRegInfo(unsigned int i, const std::string& n, ClassRegInfo* f)
        : id(i), name(n), factory(f) {}
};

struct Module_abb780 {
    void getClassList(std::vector<ClassRegInfo>& list);
};

void Module_abb780::getClassList(std::vector<ClassRegInfo>& list) {
    std::string name("dice.hfe.world.ObjectTemplateManager.Standard");
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c7d11c, name, (ClassRegInfo*)0xabb900));
}

} }
// REVERSED_FUNCTION: dice_hfe_world_ObjTemplBaseModule_getClassList_std_vector_dice_hfe_ClassRegInfo_std_allocator_dice_hfe_ClassRegInfo_ref (0xabb780)

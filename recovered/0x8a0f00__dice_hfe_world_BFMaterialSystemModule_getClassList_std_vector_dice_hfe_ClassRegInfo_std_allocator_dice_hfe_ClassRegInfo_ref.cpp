// FUNCTION: BF2 0x8a0f00
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

struct Module_8a0f00 {
    void getClassList(std::vector<ClassRegInfo>& list);
};

void Module_8a0f00::getClassList(std::vector<ClassRegInfo>& list) {
    std::string name("dice.hfe.world.MaterialManager");
    list.push_back(ClassRegInfo(0xc4af, name, (ClassRegInfo*)0x8a1f80));
}

} }
// REVERSED_FUNCTION: dice_hfe_world_BFMaterialSystemModule_getClassList_std_vector_dice_hfe_ClassRegInfo_std_allocator_dice_hfe_ClassRegInfo_ref (0x8a0f00)

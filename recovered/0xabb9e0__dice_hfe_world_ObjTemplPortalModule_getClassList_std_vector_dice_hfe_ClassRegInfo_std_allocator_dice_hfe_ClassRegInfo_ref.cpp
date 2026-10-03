// FUNCTION: BF2 0xabb9e0
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

struct Module_abb9e0 {
    void getClassList(std::vector<ClassRegInfo>& list);
};

void Module_abb9e0::getClassList(std::vector<ClassRegInfo>& list) {
    std::string name("dice.hfe.world.PortalManager.Standard");
    list.push_back(ClassRegInfo(0x10ec7a00, name, (ClassRegInfo*)0xabc0a0));
}

} }
// REVERSED_FUNCTION: dice_hfe_world_ObjTemplPortalModule_getClassList_std_vector_dice_hfe_ClassRegInfo_std_allocator_dice_hfe_ClassRegInfo_ref (0xabb9e0)

// FUNCTION: BF2 0x84dcc0
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

struct Module_84dcc0 {
    void getClassList(std::vector<ClassRegInfo>& list);
};

void Module_84dcc0::getClassList(std::vector<ClassRegInfo>& list) {
    std::string name("dice.hfe.io.NetworkableInfoManager.Standard");
    list.push_back(ClassRegInfo(*(unsigned int*)0x00bc18d4, name, (ClassRegInfo*)0x84e790));
}

} }
// REVERSED_FUNCTION: dice_hfe_io_NetworkModule_getClassList_std_vector_dice_hfe_ClassRegInfo_std_allocator_dice_hfe_ClassRegInfo_ref (0x84dcc0)

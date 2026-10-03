// FUNCTION: BF2 0x84c570
#include <string>
#include <vector>

// dice_hfe_Module_getClassList_std_vector_dice_hfe_ClassRegInfo_std_allocator_dice_hfe_ClassRegInfo_ref
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

struct Module_84c570 {
    void getClassList(std::vector<ClassRegInfo>& list);
};

void Module_84c570::getClassList(std::vector<ClassRegInfo>& list) {
    list.push_back(ClassRegInfo(*(unsigned int*)0x00bb8f7c, std::string("dice.hfe.MemoryPool.Standard"), (ClassRegInfo*)0x84d6a0));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00bb8f78, std::string("dice.hfe.EventManager"), (ClassRegInfo*)0x84d710));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00bb8f70, std::string("dice.hfe.Profiler"), (ClassRegInfo*)0x84d630));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00bb8f64, std::string("dice.hfe.DebugCounterManager"), (ClassRegInfo*)0x84d780));
}

} }
// REVERSED_FUNCTION: dice_hfe_Module_getClassList_std_vector_dice_hfe_ClassRegInfo_std_allocator_dice_hfe_ClassRegInfo_ref (0x84c570)

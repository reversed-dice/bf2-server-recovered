// FUNCTION: BF2 0x8a9330
#include <string>
#include <vector>

// dice_hfe_SpawnSystemModule_getClassList_std_vector_dice_hfe_ClassRegInfo_std_allocator_dice_hfe_ClassRegInfo_ref
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

extern char DAT_bd4584[];
extern char DAT_bd4597[];

struct Module_8a9330 {
    void getClassList(std::vector<ClassRegInfo>& list);
};

void Module_8a9330::getClassList(std::vector<ClassRegInfo>& list) {
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c76048, std::string(DAT_bd4584), (ClassRegInfo*)0x8a9740));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c76040, std::string(DAT_bd4597), (ClassRegInfo*)0x8a96d0));
}

} }
// REVERSED_FUNCTION: dice_hfe_SpawnSystemModule_getClassList_std_vector_dice_hfe_ClassRegInfo_std_allocator_dice_hfe_ClassRegInfo_ref (0x8a9330)

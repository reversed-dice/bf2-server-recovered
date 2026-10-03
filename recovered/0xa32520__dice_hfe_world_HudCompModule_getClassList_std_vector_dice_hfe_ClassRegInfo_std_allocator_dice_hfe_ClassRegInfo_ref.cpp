// FUNCTION: BF2 0xa32520
#include <string>
#include <vector>

// dice_hfe_world_HudCompModule_getClassList_std_vector_dice_hfe_ClassRegInfo_std_allocator_dice_hfe_ClassRegInfo_ref
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

extern char DAT_c5dfc8[];
extern char DAT_c5dff8[];
extern char DAT_c5e028[];
extern char DAT_c5e058[];
extern char DAT_c5e088[];
extern char DAT_c5e0b8[];
extern char DAT_c5e0e8[];

struct Module_a32520 {
    void getClassList(std::vector<ClassRegInfo>& list);
};

void Module_a32520::getClassList(std::vector<ClassRegInfo>& list) {
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c75cc4, std::string(DAT_c5dfc8), (ClassRegInfo*)0xa3a570));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c75d24, std::string(DAT_c5dff8), (ClassRegInfo*)0xa3a5e0));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c75d14, std::string(DAT_c5e028), (ClassRegInfo*)0xa3a650));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c75d04, std::string(DAT_c5e058), (ClassRegInfo*)0xa3a6c0));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c75cf4, std::string(DAT_c5e088), (ClassRegInfo*)0xa3a730));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c75ce4, std::string(DAT_c5e0b8), (ClassRegInfo*)0xa3a7a0));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c75cd4, std::string(DAT_c5e0e8), (ClassRegInfo*)0xa3a810));
}

} }
// REVERSED_FUNCTION: dice_hfe_world_HudCompModule_getClassList_std_vector_dice_hfe_ClassRegInfo_std_allocator_dice_hfe_ClassRegInfo_ref (0xa32520)

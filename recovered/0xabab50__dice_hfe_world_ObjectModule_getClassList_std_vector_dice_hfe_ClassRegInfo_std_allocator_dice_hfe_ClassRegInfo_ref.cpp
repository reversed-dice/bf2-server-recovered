// FUNCTION: BF2 0xabab50
#include <string>
#include <vector>

// dice_hfe_world_ObjectModule_getClassList_std_vector_dice_hfe_ClassRegInfo_std_allocator_dice_hfe_ClassRegInfo_ref
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

extern char DAT_c7d3f0[];
extern char DAT_c7d418[];
extern char DAT_c7d440[];
extern char DAT_c7d460[];
extern char DAT_c7d498[];
extern char DAT_c7d4c0[];

struct Module_abab50 {
    void getClassList(std::vector<ClassRegInfo>& list);
};

void Module_abab50::getClassList(std::vector<ClassRegInfo>& list) {
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c7d13c, std::string(DAT_c7d3f0), (ClassRegInfo*)0xabb250));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c7d138, std::string(DAT_c7d418), (ClassRegInfo*)0xabb2c0));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c7d10c, std::string(DAT_c7d440), (ClassRegInfo*)0xabb3a0));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c7d0fc, std::string(DAT_c7d460), (ClassRegInfo*)0xabb330));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c7d148, std::string(DAT_c7d498), (ClassRegInfo*)0xabb410));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c7d144, std::string(DAT_c7d4c0), (ClassRegInfo*)0xabb480));
}

} }
// REVERSED_FUNCTION: dice_hfe_world_ObjectModule_getClassList_std_vector_dice_hfe_ClassRegInfo_std_allocator_dice_hfe_ClassRegInfo_ref (0xabab50)

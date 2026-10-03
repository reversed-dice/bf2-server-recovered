// FUNCTION: BF2 0x84fd60
#include <string>
#include <vector>

// dice_hfe_io_FileModule_getClassList_std_vector_dice_hfe_ClassRegInfo_std_allocator_dice_hfe_ClassRegInfo_ref
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

extern char DAT_bba068[];
extern char DAT_bba084[];
extern char DAT_bba09e[];
extern char DAT_bba0c0[];
extern char DAT_bba0e8[];
extern char DAT_bba110[];

struct Module_84fd60 {
    void getClassList(std::vector<ClassRegInfo>& list);
};

void Module_84fd60::getClassList(std::vector<ClassRegInfo>& list) {
    list.push_back(ClassRegInfo(*(unsigned int*)0x00bc1954, std::string(DAT_bba0c0), (ClassRegInfo*)0x850460));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00bc1950, std::string(DAT_bba0e8), (ClassRegInfo*)0x8504d0));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00bc1944, std::string(DAT_bba068), (ClassRegInfo*)0x850540));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00bc194c, std::string(DAT_bba110), (ClassRegInfo*)0x8505b0));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00bc193c, std::string(DAT_bba084), (ClassRegInfo*)0x850620));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00bc1938, std::string(DAT_bba09e), (ClassRegInfo*)0x850690));
}

} }
// REVERSED_FUNCTION: dice_hfe_io_FileModule_getClassList_std_vector_dice_hfe_ClassRegInfo_std_allocator_dice_hfe_ClassRegInfo_ref (0x84fd60)

// FUNCTION: BF2 0x857af0
#include <string>
#include <vector>

// dice_hfe_io_ModuleIO_getClassList_std_vector_dice_hfe_ClassRegInfo_std_allocator_dice_hfe_ClassRegInfo_ref
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

extern char DAT_bc13e1[];
extern char DAT_bc13ff[];
extern char DAT_bc1830[];
extern char DAT_bc1850[];
extern char DAT_bc1878[];
extern char DAT_bc18a0[];

struct Module_857af0 {
    void getClassList(std::vector<ClassRegInfo>& list);
};

void Module_857af0::getClassList(std::vector<ClassRegInfo>& list) {
    list.push_back(ClassRegInfo(*(unsigned int*)0x00bc190c, std::string(DAT_bc1830), (ClassRegInfo*)0x85a4d0));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00bc18fc, std::string(DAT_bc1850), (ClassRegInfo*)0x860160));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00bc1930, std::string(DAT_bc1878), (ClassRegInfo*)0x85a380));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00bc1928, std::string(DAT_bc13e1), (ClassRegInfo*)0x85a3f0));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00bc1908, std::string(DAT_bc18a0), (ClassRegInfo*)0x85a460));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00bc18c8, std::string(DAT_bc13ff), (ClassRegInfo*)0x85a540));
}

} }
// REVERSED_FUNCTION: dice_hfe_io_ModuleIO_getClassList_std_vector_dice_hfe_ClassRegInfo_std_allocator_dice_hfe_ClassRegInfo_ref (0x857af0)

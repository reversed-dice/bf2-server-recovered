// FUNCTION: BF2 0xa59c80
#include <string>
#include <vector>

// dice_hfe_world_GameLogicObjTemplVehicleModule_getClassList_std_vector_dice_hfe_ClassRegInfo_std_allocator_dice_hfe_ClassRegInfo_ref
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

extern char DAT_c6bb68[];
extern char DAT_c6bb90[];
extern char DAT_c6bbc0[];
extern char DAT_c6bbe8[];
extern char DAT_c6bc10[];
extern char DAT_c6bc40[];
extern char DAT_c6bc68[];

struct Module_a59c80 {
    void getClassList(std::vector<ClassRegInfo>& list);
};

void Module_a59c80::getClassList(std::vector<ClassRegInfo>& list) {
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c7d090, std::string(DAT_c6bb68), (ClassRegInfo*)0xa65630));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c7d088, std::string(DAT_c6bb90), (ClassRegInfo*)0xa656a0));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c7d070, std::string(DAT_c6bbc0), (ClassRegInfo*)0xa65710));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c7d06c, std::string(DAT_c6bbe8), (ClassRegInfo*)0xa65780));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c7cf34, std::string(DAT_c6bc10), (ClassRegInfo*)0xa657f0));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c7ce7c, std::string(DAT_c6bc40), (ClassRegInfo*)0xa65860));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c7d054, std::string(DAT_c6bc68), (ClassRegInfo*)0xa658d0));
}

} }
// REVERSED_FUNCTION: dice_hfe_world_GameLogicObjTemplVehicleModule_getClassList_std_vector_dice_hfe_ClassRegInfo_std_allocator_dice_hfe_ClassRegInfo_ref (0xa59c80)

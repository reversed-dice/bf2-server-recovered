// FUNCTION: BF2 0x8a0dd0
#include <string>
#include <vector>

namespace dice { namespace hfe {

// may_alias on the 4-byte fields and the SingletonRegInfo* type on the
// pointer field are both there to keep sched2 from hoisting the _M_finish
// load over these stores. See this pattern module's docstring.
typedef unsigned int __attribute__((may_alias)) uint_alias_8a0dd0;

struct SingletonRegInfo {
    std::string name;
    SingletonRegInfo* ptr;
    unsigned int a;
    unsigned int b;
    unsigned int c;
    // The three 4-byte values are baked into the constructor body rather than
    // passed as arguments: when one of them is a global, an argument would be
    // read at the CALL SITE, i.e. before the inlined string copy, and GCC then
    // parks both globals in extra callee-saved registers (two more saves, frame
    // 0x58 instead of 0x48, 85.71%). Read inside the body they land after the
    // copy, where the target has them.
    SingletonRegInfo(const std::string& n, SingletonRegInfo* p)
        : name(n), ptr(p) {
        *(uint_alias_8a0dd0*)&a = 0xc4ae;
        *(uint_alias_8a0dd0*)&b = 0xc4af;
        *(uint_alias_8a0dd0*)&c = 0x1;
    }
};

struct Module_8a0dd0 {
    void getSingletonList(std::vector<SingletonRegInfo>& list);
};

void Module_8a0dd0::getSingletonList(std::vector<SingletonRegInfo>& list) {
    std::string name("MaterialManager");
    list.push_back(SingletonRegInfo(name, (SingletonRegInfo*)0x10c2800));
}

} }
// REVERSED_FUNCTION: dice_hfe_world_BFMaterialSystemModule_getSingletonList_std_vector_dice_hfe_SingletonRegInfo_std_allocator_dice_hfe_SingletonRegInfo_ref (0x8a0dd0)

// FUNCTION: BF2 0xabbb00
#include <string>
#include <vector>

namespace dice { namespace hfe {

// may_alias on the 4-byte fields and the SingletonRegInfo* type on the
// pointer field are both there to keep sched2 from hoisting the _M_finish
// load over these stores. See this pattern module's docstring.
typedef unsigned int __attribute__((may_alias)) uint_alias_abbb00;

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
        *(uint_alias_abbb00*)&a = 0xe140c2fb;
        *(uint_alias_abbb00*)&b = 0x10ec7a00;
        *(uint_alias_abbb00*)&c = 0x1;
    }
};

struct Module_abbb00 {
    void getSingletonList(std::vector<SingletonRegInfo>& list);
};

void Module_abbb00::getSingletonList(std::vector<SingletonRegInfo>& list) {
    std::string name("PortalManager");
    list.push_back(SingletonRegInfo(name, (SingletonRegInfo*)0x1133c00));
}

} }
// REVERSED_FUNCTION: dice_hfe_world_ObjTemplPortalModule_getSingletonList_std_vector_dice_hfe_SingletonRegInfo_std_allocator_dice_hfe_SingletonRegInfo_ref (0xabbb00)

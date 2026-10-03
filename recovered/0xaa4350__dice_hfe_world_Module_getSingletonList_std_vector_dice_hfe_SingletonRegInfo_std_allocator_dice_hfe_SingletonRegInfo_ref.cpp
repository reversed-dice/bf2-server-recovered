// FUNCTION: BF2 0xaa4350
#include <string>
#include <vector>

// dice_hfe_world_Module_getSingletonList_std_vector_dice_hfe_SingletonRegInfo_std_allocator_dice_hfe_SingletonRegInfo_ref
// One registration per singleton. The name strings are unnamed temporaries,
// as in the multi-registration getClassList batch.

namespace dice { namespace hfe {

typedef unsigned int __attribute__((may_alias)) uint_alias_aa4350;

struct SingletonRegInfo {
    std::string name;
    SingletonRegInfo* ptr;
    unsigned int iid;
    unsigned int cid;
    unsigned int kind;
    // may_alias on the 4-byte fields keeps sched2 from hoisting the _M_finish
    // load over these stores (see patterns/module_getsingletonlist).
    // The two id globals are passed BY POINTER and read inside the body: as
    // by-value arguments they would be loaded at the call site, before the
    // inlined string copy, and GCC parks them in extra callee-saved registers
    // (see patterns/module_getsingletonlist).
    SingletonRegInfo(const std::string& n, SingletonRegInfo* p,
                     const unsigned int* pi, const unsigned int* pc, unsigned int k)
        : name(n), ptr(p) {
        *(uint_alias_aa4350*)&kind = k;
        *(uint_alias_aa4350*)&iid = *pi;
        *(uint_alias_aa4350*)&cid = *pc;
    }
    // Immediate form, for registrations whose ids are constants rather than
    // globals: nothing to load, so the values can come in as arguments.
    SingletonRegInfo(const std::string& n, SingletonRegInfo* p,
                     unsigned int i, unsigned int c, unsigned int k)
        : name(n), ptr(p) {
        *(uint_alias_aa4350*)&kind = k;
        *(uint_alias_aa4350*)&iid = i;
        *(uint_alias_aa4350*)&cid = c;
    }
};

extern char dice_hfe_world_objectManager;
extern char dice_hfe_world_objectTemplateManager;
extern char dice_hfe_world_playerManager;
extern char dice_hfe_world_windManager;
extern unsigned int dice_hfe_world_CID_ObjectManager;
extern unsigned int dice_hfe_world_CID_ObjectTemplateManager;
extern unsigned int dice_hfe_world_CID_PlayerManager;
extern unsigned int dice_hfe_world_CID_WindManager;
extern unsigned int dice_hfe_world_IID_IObjectManager;
extern unsigned int dice_hfe_world_IID_IObjectTemplateManager;
extern unsigned int dice_hfe_world_IID_IPlayerManager;
extern unsigned int dice_hfe_world_IID_IWindManager;

struct Module_aa4350 {
    void getSingletonList(std::vector<SingletonRegInfo>& list);
};

void Module_aa4350::getSingletonList(std::vector<SingletonRegInfo>& list) {
    list.push_back(SingletonRegInfo(std::string("ObjectManager"), (SingletonRegInfo*)&dice_hfe_world_objectManager, &dice_hfe_world_IID_IObjectManager, &dice_hfe_world_CID_ObjectManager, 1));
    list.push_back(SingletonRegInfo(std::string("ObjectTemplateManager"), (SingletonRegInfo*)&dice_hfe_world_objectTemplateManager, &dice_hfe_world_IID_IObjectTemplateManager, &dice_hfe_world_CID_ObjectTemplateManager, 1));
    list.push_back(SingletonRegInfo(std::string("PlayerManager"), (SingletonRegInfo*)&dice_hfe_world_playerManager, &dice_hfe_world_IID_IPlayerManager, &dice_hfe_world_CID_PlayerManager, 1));
    list.push_back(SingletonRegInfo(std::string("WindManager"), (SingletonRegInfo*)&dice_hfe_world_windManager, &dice_hfe_world_IID_IWindManager, &dice_hfe_world_CID_WindManager, 1));
}

} }
// REVERSED_FUNCTION: dice_hfe_world_Module_getSingletonList_std_vector_dice_hfe_SingletonRegInfo_std_allocator_dice_hfe_SingletonRegInfo_ref (0xaa4350)

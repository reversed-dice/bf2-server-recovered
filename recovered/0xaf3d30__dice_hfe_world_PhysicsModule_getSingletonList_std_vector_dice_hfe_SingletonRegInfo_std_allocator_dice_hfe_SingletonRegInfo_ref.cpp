// FUNCTION: BF2 0xaf3d30
#include <string>
#include <vector>

// dice_hfe_world_PhysicsModule_getSingletonList_std_vector_dice_hfe_SingletonRegInfo_std_allocator_dice_hfe_SingletonRegInfo_ref
// One registration per singleton. The name strings are unnamed temporaries,
// as in the multi-registration getClassList batch.

namespace dice { namespace hfe {

typedef unsigned int __attribute__((may_alias)) uint_alias_af3d30;

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
        *(uint_alias_af3d30*)&kind = k;
        *(uint_alias_af3d30*)&iid = *pi;
        *(uint_alias_af3d30*)&cid = *pc;
    }
    // Immediate form, for registrations whose ids are constants rather than
    // globals: nothing to load, so the values can come in as arguments.
    SingletonRegInfo(const std::string& n, SingletonRegInfo* p,
                     unsigned int i, unsigned int c, unsigned int k)
        : name(n), ptr(p) {
        *(uint_alias_af3d30*)&kind = k;
        *(uint_alias_af3d30*)&iid = i;
        *(uint_alias_af3d30*)&cid = c;
    }
};

extern char dice_hfe_world_basicPhysicsSystem;
extern char dice_hfe_world_collisionManager;
extern char dice_hfe_world_heightmapCluster;
extern char dice_hfe_world_physicsNodeManager;
extern char dice_hfe_world_responsePhysicsManager;
extern unsigned int dice_hfe_world_CID_BasicPhysicsSystem;
extern unsigned int dice_hfe_world_CID_CollisionManager;
extern unsigned int dice_hfe_world_CID_HeightmapCluster;
extern unsigned int dice_hfe_world_CID_PhysicsNodeManager;
extern unsigned int dice_hfe_world_CID_ResponsePhysicsManager;
extern unsigned int dice_hfe_world_IID_ICollisionManager;
extern unsigned int dice_hfe_world_IID_IHeightmapCluster;
extern unsigned int dice_hfe_world_IID_IPhysicsNodeManager;
extern unsigned int dice_hfe_world_IID_IPhysicsSystem;
extern unsigned int dice_hfe_world_IID_IResponsePhysicsManager;

struct Module_af3d30 {
    void getSingletonList(std::vector<SingletonRegInfo>& list);
};

void Module_af3d30::getSingletonList(std::vector<SingletonRegInfo>& list) {
    list.push_back(SingletonRegInfo(std::string("BasicPhysicsSystem"), (SingletonRegInfo*)&dice_hfe_world_basicPhysicsSystem, &dice_hfe_world_IID_IPhysicsSystem, &dice_hfe_world_CID_BasicPhysicsSystem, 1));
    list.push_back(SingletonRegInfo(std::string("PhysicsNodeManager"), (SingletonRegInfo*)&dice_hfe_world_physicsNodeManager, &dice_hfe_world_IID_IPhysicsNodeManager, &dice_hfe_world_CID_PhysicsNodeManager, 1));
    list.push_back(SingletonRegInfo(std::string("ResponsePhysicsManager"), (SingletonRegInfo*)&dice_hfe_world_responsePhysicsManager, &dice_hfe_world_IID_IResponsePhysicsManager, &dice_hfe_world_CID_ResponsePhysicsManager, 1));
    list.push_back(SingletonRegInfo(std::string("HeightmapCluster"), (SingletonRegInfo*)&dice_hfe_world_heightmapCluster, &dice_hfe_world_IID_IHeightmapCluster, &dice_hfe_world_CID_HeightmapCluster, 1));
    list.push_back(SingletonRegInfo(std::string("CollisionManager"), (SingletonRegInfo*)&dice_hfe_world_collisionManager, &dice_hfe_world_IID_ICollisionManager, &dice_hfe_world_CID_CollisionManager, 1));
}

} }
// REVERSED_FUNCTION: dice_hfe_world_PhysicsModule_getSingletonList_std_vector_dice_hfe_SingletonRegInfo_std_allocator_dice_hfe_SingletonRegInfo_ref (0xaf3d30)

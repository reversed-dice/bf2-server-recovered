// FUNCTION: BF2 0xaf4340
#include <string>
#include <vector>

// dice_hfe_world_PhysicsModule_getClassList_std_vector_dice_hfe_ClassRegInfo_std_allocator_dice_hfe_ClassRegInfo_ref
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

struct Module_af4340 {
    void getClassList(std::vector<ClassRegInfo>& list);
};

void Module_af4340::getClassList(std::vector<ClassRegInfo>& list) {
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c965c4, std::string("dice.hfe.world.PhysicsSystem.Basic"), (ClassRegInfo*)0xaf8b70));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c965bc, std::string("dice.hfe.world.PhysicsNode.Basic"), (ClassRegInfo*)0xaf8be0));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c9658c, std::string("dice.hfe.world.PhysicsNodeManager.Basic"), (ClassRegInfo*)0xaf8c50));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c965a4, std::string("dice.hfe.world.ResponsePhysics.Basic"), (ClassRegInfo*)0xaf8cc0));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c96584, std::string("dice.hfe.world.ResponsePhysicsManager.Basic"), (ClassRegInfo*)0xaf8d30));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c9656c, std::string("dice.hfe.world.Heightmap"), (ClassRegInfo*)0xaf6880));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c96568, std::string("dice.hfe.world.HeightmapEditable"), (ClassRegInfo*)0xaf68f0));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c96570, std::string("dice.hfe.world.HeightmapCluster"), (ClassRegInfo*)0xaf6810));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c96564, std::string("dice.hfe.world.HeightmapClusterEditable"), (ClassRegInfo*)0xaf6960));
    list.push_back(ClassRegInfo(*(unsigned int*)0x00c96550, std::string("dice.hfe.world.CollisionManager"), (ClassRegInfo*)0xaf69d0));
}

} }
// REVERSED_FUNCTION: dice_hfe_world_PhysicsModule_getClassList_std_vector_dice_hfe_ClassRegInfo_std_allocator_dice_hfe_ClassRegInfo_ref (0xaf4340)

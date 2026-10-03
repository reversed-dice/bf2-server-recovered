// FUNCTION: BF2 0xaf38d0
namespace dice { namespace hfe {
namespace world { extern void* physicsNodeManager; }
namespace world_IID { extern unsigned int IPhysicsNodeManager; }


extern void* classManager;

typedef void (*fn_release)(void*);
typedef void* (*fn_create)(void*, unsigned int, unsigned int, int);

extern "C" void setter_af38d0(unsigned int param_1) {
    using namespace dice::hfe;
    if (world::physicsNodeManager != 0) {
        void* vtbl = *(void**)world::physicsNodeManager;
        fn_release f = *(fn_release*)((char*)vtbl + 0x10);
        f(world::physicsNodeManager);
        world::physicsNodeManager = 0;
    }
    void* vtbl2 = *(void**)classManager;
    fn_create f2 = *(fn_create*)((char*)vtbl2 + 0x68);
    world::physicsNodeManager = f2(classManager, param_1, world_IID::IPhysicsNodeManager, 0);
}
} }
// REVERSED_FUNCTION: dice_hfe_world_setPhysicsNodeManager_unsigned_int (0xaf38d0)

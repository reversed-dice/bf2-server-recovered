// FUNCTION: BF2 0xaf3910
namespace dice { namespace hfe {
namespace world { extern void* responsePhysicsManager; }
namespace world_IID { extern unsigned int IResponsePhysicsManager; }


extern void* classManager;

typedef void (*fn_release)(void*);
typedef void* (*fn_create)(void*, unsigned int, unsigned int, int);

extern "C" void setter_af3910(unsigned int param_1) {
    using namespace dice::hfe;
    if (world::responsePhysicsManager != 0) {
        void* vtbl = *(void**)world::responsePhysicsManager;
        fn_release f = *(fn_release*)((char*)vtbl + 0x10);
        f(world::responsePhysicsManager);
        world::responsePhysicsManager = 0;
    }
    void* vtbl2 = *(void**)classManager;
    fn_create f2 = *(fn_create*)((char*)vtbl2 + 0x68);
    world::responsePhysicsManager = f2(classManager, param_1, world_IID::IResponsePhysicsManager, 0);
}
} }
// REVERSED_FUNCTION: dice_hfe_world_setResponsePhysicsManager_unsigned_int (0xaf3910)

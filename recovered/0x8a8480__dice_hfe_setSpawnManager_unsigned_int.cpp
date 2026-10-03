// FUNCTION: BF2 0x8a8480
namespace dice { namespace hfe {
namespace IID { extern unsigned int ISpawnManager; }
extern void* spawnManager;

extern void* classManager;

typedef void (*fn_release)(void*);
typedef void* (*fn_create)(void*, unsigned int, unsigned int, int);

extern "C" void setter_8a8480(unsigned int param_1) {
    using namespace dice::hfe;
    if (spawnManager != 0) {
        void* vtbl = *(void**)spawnManager;
        fn_release f = *(fn_release*)((char*)vtbl + 0x10);
        f(spawnManager);
        spawnManager = 0;
    }
    void* vtbl2 = *(void**)classManager;
    fn_create f2 = *(fn_create*)((char*)vtbl2 + 0x68);
    spawnManager = f2(classManager, param_1, IID::ISpawnManager, 0);
}
} }
// REVERSED_FUNCTION: dice_hfe_setSpawnManager_unsigned_int (0x8a8480)

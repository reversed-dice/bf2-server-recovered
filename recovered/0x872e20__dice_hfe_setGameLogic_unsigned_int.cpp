// FUNCTION: BF2 0x872e20
namespace dice { namespace hfe {
namespace IID { extern unsigned int IGameLogic; }
extern void* gameLogic;

extern void* classManager;

typedef void (*fn_release)(void*);
typedef void* (*fn_create)(void*, unsigned int, unsigned int, int);

extern "C" void setter_872e20(unsigned int param_1) {
    using namespace dice::hfe;
    if (gameLogic != 0) {
        void* vtbl = *(void**)gameLogic;
        fn_release f = *(fn_release*)((char*)vtbl + 0x10);
        f(gameLogic);
        gameLogic = 0;
    }
    void* vtbl2 = *(void**)classManager;
    fn_create f2 = *(fn_create*)((char*)vtbl2 + 0x68);
    gameLogic = f2(classManager, param_1, IID::IGameLogic, 0);
}
} }
// REVERSED_FUNCTION: dice_hfe_setGameLogic_unsigned_int (0x872e20)

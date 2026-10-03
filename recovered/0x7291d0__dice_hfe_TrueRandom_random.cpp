// FUNCTION: BF2 0x7291d0
namespace dice { namespace hfe {
extern "C" char dice_hfe_trueRandom_initialized;
extern "C" void dice_hfe_TrueRandom_init();
extern "C" int rand();
extern "C" float _DAT_00b86ef0;

extern "C" float dice_hfe_TrueRandom_random() {
    if (!dice_hfe_trueRandom_initialized) {
        dice_hfe_TrueRandom_init();
    }
    int iVar1 = rand();
    return (float)iVar1 * _DAT_00b86ef0;
}
} }

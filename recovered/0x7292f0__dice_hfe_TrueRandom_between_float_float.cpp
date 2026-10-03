// FUNCTION: BF2 0x7292f0
namespace dice { namespace hfe {

extern "C" float dice_hfe_TrueRandom_random();
float fn_0x7292f0(float a, float b) {
    float r = dice_hfe_TrueRandom_random();
    return a + (b - a) * r;
}

} }
// REVERSED_FUNCTION: dice_hfe_TrueRandom_between_float_float (0x7292f0)

// FUNCTION: BF2 0x729200
namespace dice { namespace hfe {
extern float fn_7291d0();
int cb_729200(int min, int max) {
    int span = max - min;
    float r = fn_7291d0() * (float)span;
    return min + (int)r;
}
} }
// REVERSED_FUNCTION: dice_hfe_TrueRandom_between_int_int (0x729200)

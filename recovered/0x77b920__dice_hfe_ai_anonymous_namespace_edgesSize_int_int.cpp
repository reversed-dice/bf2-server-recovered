// FUNCTION: BF2 0x77b920
namespace dice { namespace hfe { namespace ai {

int fn_0x77b920(int a, int b) {
    int c = a - 1;
    int r = c * b;
    int d = b - 1;
    r += a * d;
    r += c * d;
    return r;
}

} } }
// REVERSED_FUNCTION: dice_hfe_ai_anonymous_namespace_edgesSize_int_int (0x77b920)

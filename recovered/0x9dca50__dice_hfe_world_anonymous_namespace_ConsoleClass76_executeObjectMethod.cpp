// FUNCTION: BF2 0x9dca50
namespace dice { namespace hfe {
extern "C" long dice_hfe_world_anonymous_namespace_getActiveEffectBundle();

long cb(long param_1) {
    if (*(int*)(param_1 + 0x30) != 1) return 0;
    float v = **(float**)(param_1 + 0x38);
    *(char*)(param_1 + 0x108) = 0;
    long b = dice_hfe_world_anonymous_namespace_getActiveEffectBundle();
    if (v < 0.0f) v = 0.0f;
    else if (1.0f < v) v = 1.0f;
    *(float*)(b + 0x2b0) = v;
    return 0;
}
} }

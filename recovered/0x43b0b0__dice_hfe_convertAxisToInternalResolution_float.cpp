// FUNCTION: BF2 0x43b0b0
// BF2_FLAGS: -fno-tree-dominator-opts
namespace dice { namespace hfe {

static inline short toInternal(float v)
{
    float x = v * 100.0f;
    if (x > 32767.0f)
        return 32767;
    if (x < -32767.0f)
        return -32767;
    return (short)x;
}

float convertAxisToInternalResolution(float v)
{
    return toInternal(v) / 100.0f;
}

} }

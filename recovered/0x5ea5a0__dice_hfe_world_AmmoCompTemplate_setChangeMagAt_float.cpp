// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x5ea5a0
extern "C" void setChangeMagAt_5ea5a0(void* self, float v)
{
    if (v > 1.0f) v = 1.0f;
    else if (v < 0.0f) v = 0.0f;
    *(float*)((char*)self + 0x2c) = v;
}

// FUNCTION: BF2 0x5ffab0
namespace dice { namespace hfe { namespace world {
float getAcceptDelay_0x5ffab0(void* self) {
    void* p = *(void**)((char*)self + 0x1c0);
    float a = *(float*)((char*)p + 0x28);
    float b = *(float*)((char*)p + 0xa0);
    return (a > b ? a : b) + *(float*)((char*)p + 0xa8);
}
} } }

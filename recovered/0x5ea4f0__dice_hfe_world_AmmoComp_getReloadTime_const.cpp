// FUNCTION: BF2 0x5ea4f0
namespace dice { namespace hfe { namespace world {
float getReloadTime_0x5ea4f0(void* self) {
    void* p = *(void**)((char*)self + 0x80);
    float a = *(float*)((char*)p + 0x34);
    float b = *(float*)((char*)p + 0x14);
    return a > b ? a : b;
}
} } }

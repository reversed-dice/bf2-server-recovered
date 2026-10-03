// FUNCTION: BF2 0x8f0b50
namespace dice { namespace hfe { namespace world {
extern void* fn_h_0069de30(int g1);
void* cb_8f0b50(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* q = fn_h_0069de30(*(int*)0x00c7ce78);
        *(int*)((char*)p + 0x10c) = *(int*)((char*)q + 0x3b0);
        return (char*)p + 0x10c;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    float v = **(float**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* q = fn_h_0069de30(*(int*)0x00c7ce78);
    *(float*)((char*)q + 0x3b0) = v > 0.0f ? v : 0.0f;
    return 0;
}
} } }

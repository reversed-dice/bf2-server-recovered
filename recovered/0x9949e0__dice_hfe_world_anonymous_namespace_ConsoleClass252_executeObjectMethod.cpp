// FUNCTION: BF2 0x9949e0
namespace dice { namespace hfe {
extern void* fn_h_0069de30(int g1);
void* cb_9949e0(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* q = fn_h_0069de30(*(int*)0x00c7d07c);
        int* dst = (int*)((char*)p + 0x10c);
        int v1 = *(int*)((char*)q + 0x284);
        dst[0] = *(int*)((char*)q + 0x280);
        dst[1] = v1;
        return dst;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    int* src = *(int**)((char*)p + 0x38);
    int v1 = src[1];
    int v0 = src[0];
    *(char*)((char*)p + 0x108) = 0;
    void* q = fn_h_0069de30(*(int*)0x00c7d07c);
    *(int*)((char*)q + 0x280) = v0;
    *(int*)((char*)q + 0x284) = v1;
    return 0;
}
} }

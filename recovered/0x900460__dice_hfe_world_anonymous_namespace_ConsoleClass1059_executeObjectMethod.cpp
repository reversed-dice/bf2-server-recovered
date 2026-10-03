// FUNCTION: BF2 0x900460
namespace dice { namespace hfe {
extern void* fn_h_0069de30(int g1);
void* cb_900460(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* q = fn_h_0069de30(*(int*)0x00c7ce78);
        int* dst = (int*)((char*)p + 0x10c);
        int v1 = *(int*)((char*)q + 0x2d8);
        dst[0] = *(int*)((char*)q + 0x2d4);
        dst[1] = v1;
        return dst;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    int* src = *(int**)((char*)p + 0x38);
    int v1 = src[1];
    int v0 = src[0];
    *(char*)((char*)p + 0x108) = 0;
    void* q = fn_h_0069de30(*(int*)0x00c7ce78);
    *(int*)((char*)q + 0x2d4) = v0;
    *(int*)((char*)q + 0x2d8) = v1;
    return 0;
}
} }

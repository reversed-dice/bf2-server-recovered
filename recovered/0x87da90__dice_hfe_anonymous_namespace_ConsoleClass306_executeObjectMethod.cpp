// FUNCTION: BF2 0x87da90
namespace dice { namespace hfe {
extern void* fn_h_00872ec0();
void* cb_87da90(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* q = fn_h_00872ec0();
        int v1 = *(int*)((char*)q + 0x8);
        int* dst = (int*)((char*)p + 0x10c);
        dst[0] = *(int*)((char*)q + 0x4);
        dst[1] = v1;
        return dst;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    int* src = *(int**)((char*)p + 0x38);
    int v1 = src[1];
    int v0 = src[0];
    *(char*)((char*)p + 0x108) = 0;
    void* q = fn_h_00872ec0();
    *(int*)((char*)q + 0x4) = v0;
    *(int*)((char*)q + 0x8) = v1;
    return 0;
}
} }

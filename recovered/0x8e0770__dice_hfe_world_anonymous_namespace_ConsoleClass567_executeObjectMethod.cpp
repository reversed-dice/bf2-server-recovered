// FUNCTION: BF2 0x8e0770
namespace dice { namespace hfe { namespace world {
extern void* fn_h_0069de30(int g1);
extern float fn_get_00610190(void* self);
void* cb_8e0770(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* q = fn_h_0069de30(*(int*)0x00c7cfb4);
        float v = fn_get_00610190(q);
        *(float*)((char*)p + 0x10c) = v;
        return (char*)p + 0x10c;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    float v = **(float**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* q = fn_h_0069de30(*(int*)0x00c7cfb4);
    *(float*)((char*)q + 0x27c) = v;
    return 0;
}
} } }

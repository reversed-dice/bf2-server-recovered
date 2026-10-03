// FUNCTION: BF2 0x8f1490
namespace dice { namespace hfe { namespace world {
extern void* fn_h_0069de30(int g1);
void* cb_8f1490(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* q = fn_h_0069de30(*(int*)0x00c7ce78);
        *(int*)((char*)p + 0x10c) = *(unsigned char*)((char*)q + 0x3b6);
        return (char*)p + 0x10c;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    int v = **(int**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* q = fn_h_0069de30(*(int*)0x00c7ce78);
    *(char*)((char*)q + 0x3b6) = v != 0;
    return 0;
}
} } }

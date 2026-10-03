// FUNCTION: BF2 0x985cd0
namespace dice { namespace hfe {
extern void* fn_h_0069de30(int g1);
void* cb_985cd0(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* q = fn_h_0069de30(*(int*)0x00c7d078);
        char v = (*(unsigned char*)((char*)q + 0xe8) >> 0x2) & 1;
        *(char*)((char*)p + 0x10a) = v;
        return (char*)p + 0x10a;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    char v = **(char**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* q = fn_h_0069de30(*(int*)0x00c7d078);
    *(unsigned char*)((char*)q + 0xe8) = (*(unsigned char*)((char*)q + 0xe8) & 0xfb) | ((v & 1) << 0x2);
    return 0;
}
} }

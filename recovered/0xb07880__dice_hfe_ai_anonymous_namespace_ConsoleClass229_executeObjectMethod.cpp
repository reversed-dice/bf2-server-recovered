// FUNCTION: BF2 0xb07880
namespace dice { namespace hfe {
extern void* fn_h_00afedd0();
void* cb_b07880(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* q = fn_h_00afedd0();
        char v = *(char*)((char*)q + 0x3);
        *(char*)((char*)p + 0x10a) = v;
        return (char*)p + 0x10a;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    char v = **(char**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* q = fn_h_00afedd0();
    *(char*)((char*)q + 0x3) = v;
    return 0;
}
} }

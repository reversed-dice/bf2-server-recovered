// FUNCTION: BF2 0xb07a30
namespace dice { namespace hfe {
extern void* fn_h_00afedd0();
void* cb_b07a30(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* q = fn_h_00afedd0();
        int v = *(int*)((char*)q + 0x1c);
        *(int*)((char*)p + 0x10c) = v;
        return (char*)p + 0x10c;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    int v = **(int**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* q = fn_h_00afedd0();
    *(int*)((char*)q + 0x1c) = v;
    return 0;
}
} }

// FUNCTION: BF2 0x9cf330
namespace dice { namespace hfe {
extern void* fn_h_009bc590();
void* cb_9cf330(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* q = fn_h_009bc590();
        char v = *(char*)((char*)q + 0x88);
        *(char*)((char*)p + 0x10a) = v;
        return (char*)p + 0x10a;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    char v = **(char**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* q = fn_h_009bc590();
    *(char*)((char*)q + 0x88) = v;
    return 0;
}
} }

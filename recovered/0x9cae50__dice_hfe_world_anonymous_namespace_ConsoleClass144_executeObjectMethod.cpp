// FUNCTION: BF2 0x9cae50
namespace dice { namespace hfe {
extern void* fn_h_0069de30(int g1);
void* cb_9cae50(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* q = fn_h_0069de30(*(int*)0x00c7d094);
        *(char*)((char*)p + 0x10a) = *(char*)((char*)q + 0x548);
        return (char*)p + 0x10a;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    char v = **(char**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* q = fn_h_0069de30(*(int*)0x00c7d094);
    *(char*)((char*)q + 0x548) = v != 0;
    return 0;
}
} }

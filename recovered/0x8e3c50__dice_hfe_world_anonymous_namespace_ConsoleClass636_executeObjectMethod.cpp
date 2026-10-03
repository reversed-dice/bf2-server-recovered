// FUNCTION: BF2 0x8e3c50
namespace dice { namespace hfe {
extern void* fn_h_00699ee0(int g1, int g2);
void* cb_8e3c50(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        fn_h_00699ee0(*(int*)0x00c7cf9c, *(int*)0x00c75d44);
        *(char*)((char*)p + 0x10a) = 1;
        return (char*)p + 0x10a;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    *(char*)((char*)p + 0x108) = 0;
    fn_h_00699ee0(*(int*)0x00c7cf9c, *(int*)0x00c75d44);
    return 0;
}
} }

// FUNCTION: BF2 0x8e5720
namespace dice { namespace hfe {
extern void* fn_h_00699ee0(int g1, int g2);
void* cb_8e5720(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        fn_h_00699ee0(*(int*)0x00c7cfac, *(int*)0x00c75d94);
        *(char*)((char*)p + 0x10a) = 0x0;
        return (char*)p + 0x10a;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    *(char*)((char*)p + 0x108) = 0;
    fn_h_00699ee0(*(int*)0x00c7cfac, *(int*)0x00c75d94);
    return 0;
}
} }

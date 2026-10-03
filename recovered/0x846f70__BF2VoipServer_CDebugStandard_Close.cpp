// FUNCTION: BF2 0x846f70
namespace dice { namespace hfe {
extern void fn_846f00(void* a);
extern void fn_4085b8(void* a);
void Close_0x846f70(void) {
    void* p = *(void**)0x010b3210;
    if (p) {
        fn_846f00(p);
        fn_4085b8(p);
        *(void**)0x010b3210 = 0;
    }
}
} }

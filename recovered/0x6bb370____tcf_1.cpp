// FUNCTION: BF2 0x6bb370
namespace dice { namespace hfe {
extern void fn_4085b8(void* a);
void fn_0x6bb370(void) {
    void* end = *(void**)0x010938c8;
    void* it = *(void**)0x010938c0;
    void* p = it;
    if (end != it) {
        do {
            p = (char*)p + 0xc;
        } while (end != p);
    }
    if (it)
        fn_4085b8(it);
}
} }

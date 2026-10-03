// FUNCTION: BF2 0x81dd50
namespace dice { namespace hfe {
extern void* fn_81d720();
extern void fn_408298(int a);
void f_0x81dd50() {
    void* p = fn_81d720();
    if (p) {
        if (*(int*)p != -1)
            fn_408298(*(int*)p);
        *(int*)p = -1;
        *(int*)((char*)p + 0x10) = 4;
    }
}
} }

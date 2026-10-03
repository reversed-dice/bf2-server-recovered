// FUNCTION: BF2 0x56a890
namespace dice { namespace hfe { namespace world {
void fn_56a860(long param_1) {
    void* a = *(void**)(param_1 + 8);
    if (a != 0) {
        typedef void (*Fn)(void*);
        Fn f = (Fn)(*(void***)a)[0x30/8];
        f(a);
    }
    void* b = *(void**)(param_1 + 0x10);
    if (b != 0) {
        typedef void (*Fn)(void*);
        Fn f = (Fn)(*(void***)b)[0x30/8];
        f(b);
    }
    *(char*)(param_1 + 0x18) = 0;
    *(char*)(param_1 + 0x19) = 0;
}
} } }

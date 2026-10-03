// FUNCTION: BF2 0x805590
namespace dice { namespace hfe {
extern void* func_0x0083b5e0(long, long, long, void*, void*, void*);  // TableNew2
extern void* func_0x0083add0(long, long, long);  // ArrayNew
extern void func_0x0083b7a0(void*);  // TableFree
int ciInitChannels_0x805590(void* p) {
    void* t = func_0x0083b5e0(0x228, 7, 2, (void*)0x805350, (void*)0x8053a0, (void*)0x805430);
    int r = 0;
    *(void**)((char*)p + 0x868) = t;
    if (t != 0) {
        void* a = func_0x0083add0(0x228, 0, 0);
        *(void**)((char*)p + 0x870) = a;
        r = 1;
        if (a == 0) {
            func_0x0083b7a0(*(void**)((char*)p + 0x868));
            return 0;
        }
    }
    return r;
}
} }
// REVERSED_FUNCTION: ciInitChannels (0x805590)

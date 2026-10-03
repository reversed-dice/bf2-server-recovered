// FUNCTION: BF2 0x687020
namespace dice { namespace hfe { namespace world {
extern void fn_72fb50(void* a, void* b, void* c);
void* getAbsolutePosition_0x687020(void* self) {
    int f = *(int*)((char*)self + 8);
    if ((f & 0x88000) == 0x80000) {
        void* p = *(void**)((char*)self + 0x50);
        void* r = ((void* (*)(void*))(*(void***)p)[0x21])(p);
        fn_72fb50((char*)self + 0x10c, *(void**)((char*)self + 0x158), r);
    }
    *(int*)((char*)self + 8) &= 0xfff7ffff;
    return (char*)self + 0x13c;
}
} } }

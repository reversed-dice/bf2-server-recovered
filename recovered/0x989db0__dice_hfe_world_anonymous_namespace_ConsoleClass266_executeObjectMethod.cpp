// FUNCTION: BF2 0x989db0
namespace dice { namespace hfe { namespace world { namespace anonymous_namespace {
extern void* fn_69de30(int a);
extern void fn_5771c0(void* a, unsigned char b);
long executeObjectMethod_0x989db0(void* self) {
    if (*(int*)((char*)self + 0x30) == 1) {
        unsigned char v = **(unsigned char**)((char*)self + 0x38);
        *(char*)((char*)self + 0x108) = 0;
        void* t = fn_69de30(*(int*)0x00c7d0a0);
        fn_5771c0(t, v);
    }
    return 0;
}
} } } }

// FUNCTION: BF2 0x81eba0
namespace dice { namespace hfe {
extern void* fn_81e660(void* a, void* b);
extern void* fn_81e5a0(void* a, void* b);
void* BucketSet_0x81eba0(void* self, void* arg2, void* arg3) {
    void* p = fn_81e660(self, arg2);
    if (!p)
        return 0;
    *(int*)((char*)p + 0xc) = 0;
    return fn_81e5a0(p, arg3);
}
} }

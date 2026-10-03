// FUNCTION: BF2 0x7908b0
namespace dice { namespace hfe { namespace ai {
extern void fn_407cc8(void* a, void* b);
void ctor_0x7908b0(void* self, int arg2, float arg3, char arg4, float arg5, float arg6, void* arg7) {
    *(int*)((char*)self + 0xc) = arg2;
    *(float*)((char*)self + 0x10) = arg3;
    *(char*)((char*)self + 0x1c) = arg4;
    *(char*)((char*)self + 0x1d) = 0;
    *(float*)((char*)self + 0x14) = arg5;
    *(char*)((char*)self + 0x1e) = 0;
    *(float*)((char*)self + 0x18) = arg6;
    fn_407cc8((char*)self + 0x20, arg7);
    *(int*)((char*)self + 8) = 0;
    *(void**)self = 0;
}
} } }

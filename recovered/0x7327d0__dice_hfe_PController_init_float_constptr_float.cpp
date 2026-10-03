// FUNCTION: BF2 0x7327d0
namespace dice { namespace hfe {

void fn_0x7327d0(void* self, const float* ptr, float d) {
    *(const float**)self = ptr;
    const float* src = ptr ? ptr : (const float*)0xb2d910;
    *(float*)((char*)self+0xc) = d;
    *(int*)((char*)self+8) = *(int*)src;
}

} }
// REVERSED_FUNCTION: dice_hfe_PController_init_float_constptr_float (0x7327d0)

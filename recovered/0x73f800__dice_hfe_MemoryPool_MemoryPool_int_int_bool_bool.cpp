// FUNCTION: BF2 0x73f800
namespace dice { namespace hfe {

extern "C" void dice_hfe_MemoryPool_init_int_int_bool(void*, int, int, bool);
void fn_0x73f800(void* self, int a, int b, bool c, bool d) {
    *(void**)self = (void*)0xb98950;
    *(unsigned*)((char*)self+8) = 1;
    *((char*)self+0x15) = d;
    dice_hfe_MemoryPool_init_int_int_bool(self, a, b, c);
}

} }
// REVERSED_FUNCTION: dice_hfe_MemoryPool_MemoryPool_int_int_bool_bool (0x73f800)

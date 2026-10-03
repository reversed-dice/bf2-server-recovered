// FUNCTION: BF2 0x4f1de0
namespace dice { namespace hfe {
extern void fn_4f58e0(void* q, float f);
void cb_4f1de0(void* self, float f1, float f2) {
    if (*(char*)((char*)self + 0x7b) == 0)
        fn_4f58e0(*(void**)((char*)self + 0xa0), f1);
    *(float*)((char*)self + 0xac) = f2;
}
} }
// REVERSED_FUNCTION: dice_hfe_DemoRecorder_demoVisualUpdate_float_float (0x4f1de0)

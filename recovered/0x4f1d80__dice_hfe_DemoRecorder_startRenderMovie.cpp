// FUNCTION: BF2 0x4f1d80
namespace dice { namespace hfe {

bool fn_0x4f1d80(void* self) {
    if (*(int*)((char*)self+0xc0) == 2) {
        *(int*)((char*)self+0xc0) = 3;
        return true;
    }
    return false;
}

} }
// REVERSED_FUNCTION: dice_hfe_DemoRecorder_startRenderMovie (0x4f1d80)

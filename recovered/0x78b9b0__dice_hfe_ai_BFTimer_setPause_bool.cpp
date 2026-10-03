// FUNCTION: BF2 0x78b9b0
namespace dice { namespace hfe { namespace ai {
extern "C" void real_0x78b990();
extern "C" void real_0x78b9a0();
void fn_0x78b9b0(void* self, bool pause) {
    if (pause) real_0x78b990();
    else real_0x78b9a0();
}
} } }
// REVERSED_FUNCTION: dice_hfe_ai_BFTimer_setPause_bool (0x78b9b0)

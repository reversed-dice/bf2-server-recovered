// FUNCTION: BF2 0x64dff0
namespace dice { namespace hfe {

extern "C" bool dice_hfe_HTTPRequest_isUpdating(void*);
extern "C" void dice_hfe_HTTPRequest_update(void*);
void fn_0x656b10(void* self) {
    void* target = (char*)self + 8;
    bool r = dice_hfe_HTTPRequest_isUpdating(target);
    if (r) {
        dice_hfe_HTTPRequest_update(target);
    }
}

} }
// REVERSED_FUNCTION: dice_hfe_PlayerStats_tick (0x656b10)

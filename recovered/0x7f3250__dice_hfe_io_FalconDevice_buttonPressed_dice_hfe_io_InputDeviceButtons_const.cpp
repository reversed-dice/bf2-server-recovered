// FUNCTION: BF2 0x7f3250
namespace dice { namespace hfe { namespace io {
int cb_7f3250(void* self, unsigned int m) {
    return (*(unsigned int*)((char*)self + 0x18) & m) == 0 && (*(unsigned int*)((char*)self + 0xc) & m) != 0;
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_FalconDevice_buttonPressed_dice_hfe_io_InputDevice (0x7f3250)

// FUNCTION: BF2 0x44d9b0
// Reconstructed from: 0x44d9b0
// Purpose: setter for connection id (stores 32-bit value at offset 0x14)
// Notes:
// - Preserved nested namespace style for GCC 3.4 compatibility
// - Member mapping: offset 0x14 -> m_connectionId (int32_t)

#include <stdint.h>

namespace dice {
namespace hfe {

struct PlayerActionManager {
    void *vfptr;                 // [0x0] vtable pointer
    uint8_t __pad0[0xC];         // [0x8] padding to reach 0x14
    int32_t m_connectionId;      // [0x14] connection id stored by setter
    // other members follow...
};

} // namespace hfe
} // namespace dice

extern "C" __attribute__((noinline)) void
dice_hfe_PlayerActionManager_setConnectionId_int(dice::hfe::PlayerActionManager *param_1, int32_t param_2)
{
    // Store 32-bit connection id at offset 0x14 within the object.
    *(int32_t *)((uint8_t *)param_1 + 0x14) = param_2;
    return;
}
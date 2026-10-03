// FUNCTION: BF2 0x44cac0
// Reconstructed from: 0x44cac0
// Purpose: store vtable pointer into object then return
// Notes:
// - Uses classic nested namespaces for GCC 3.4 compatibility
// - Writes immediate 64-bit value to [RDI] and returns

#include <stdint.h>

namespace dice {
namespace hfe {

struct PlayerActionManager {
    void *vfptr; // [0x0] vtable pointer
    // other members not used here
};

} // namespace hfe
} // namespace dice

extern "C" __attribute__((noinline)) void
dice_hfe_PlayerActionManager_dtor_PlayerActionManager(dice::hfe::PlayerActionManager *param_1)
{
    // Write 64-bit immediate vtable pointer into object's vfptr (offset 0).
    *(uint64_t *)param_1 = (uint64_t)0x0000000000B2FD50ULL;
    return;
}
// FUNCTION: BF2 0x44cad0
// Reconstructed from: 0x44cad0
// Purpose: store vtable pointer into object then return

#include <stdint.h>

namespace dice {
namespace hfe {

struct PlayerActionManager {
    void *vfptr;
};

} // namespace hfe
} // namespace dice

extern "C" __attribute__((noinline)) void
dice_hfe_PlayerActionManager_dtor_PlayerActionManager(dice::hfe::PlayerActionManager *param_1)
{
    *(uint64_t *)param_1 = (uint64_t)0xB2FD50;
}
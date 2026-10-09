// FUNCTION: BF2 0x612680
// BF2_FLAGS: -fno-strict-aliasing
#include <cstdlib>

extern "C" void _ZdlPv(void*);
extern "C" void std_List_base_dice_hfe_WeakPtr_dice_hfe_world_IPlayer_std_allocator_dice_hfe_WeakPtr_dice_hfe_world_IPlayer_M_clear(void* list);
extern "C" void dice_hfe_world_IProjectileObject_dtor_IProjectileObject(void* self);
extern "C" void dice_hfe_world_Bundle_dtor_Bundle(void* self);

static inline void release_if_last(int* p) {
    if (p) {
        if (--(*p) == 0) {
            _ZdlPv(p);
        }
    }
}

namespace dice {
namespace hfe {
namespace world {

void dtor_target(void* pp)
{
    long* p = (long*)pp;
    p[0] = 0xb7a370;
    p[0x20] = 0xb7a958;
    p[0x47] = 0xb7a990;
    p[0x49] = 0xb7aca0;

    release_if_last((int*)p[0x6b]);
    release_if_last((int*)p[0x6a]);
    release_if_last((int*)p[0x69]);
    release_if_last((int*)p[0x66]);
    release_if_last((int*)p[0x57]);
    release_if_last((int*)p[0x56]);
    release_if_last((int*)p[0x55]);

    std_List_base_dice_hfe_WeakPtr_dice_hfe_world_IPlayer_std_allocator_dice_hfe_WeakPtr_dice_hfe_world_IPlayer_M_clear(p + 0x53);
    dice_hfe_world_IProjectileObject_dtor_IProjectileObject(p + 0x47);
    dice_hfe_world_Bundle_dtor_Bundle(pp);
    _ZdlPv(pp);
}

} // namespace world
} // namespace hfe
} // namespace dice

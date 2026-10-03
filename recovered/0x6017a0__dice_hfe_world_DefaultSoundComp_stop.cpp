// FUNCTION: BF2 0x6017a0
typedef void (*vf_bool_t)(void*, bool);

namespace dice { namespace hfe { namespace world {
void fn_0x6017a0(void* self) {
    vf_bool_t f = (*(vf_bool_t**)self)[0xa0/8];
    f(self, false);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultSoundComp_stop (0x6017a0)

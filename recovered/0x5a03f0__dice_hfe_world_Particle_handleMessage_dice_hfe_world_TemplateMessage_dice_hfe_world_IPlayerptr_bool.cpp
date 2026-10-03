// FUNCTION: BF2 0x5a03f0
// 0x5a03f0 - Particle_handleMessage (7 ins, 0 calls)
// Check msg type, if 0x1d call vtable with SIL=1
namespace dice { namespace hfe { namespace world {
void dice_hfe_world_Particle_handleMessage_dice_hfe_world_TemplateMessage_dice_hfe_world_IPlayerptr_bool(long self, int msg) {
    if (msg != 0x1d) return;
    typedef void (*Fn)(long, int);
    Fn f = (Fn)(*(long*)(*(long*)self + 0x68));
    f(self, 1);
}
} } }

// REVERSED_FUNCTION: dice_hfe_world_Particle_handleMessage_dice_hfe_world_TemplateMessage_dice_hfe_world_IPlayerptr_bool (0x5a03f0)

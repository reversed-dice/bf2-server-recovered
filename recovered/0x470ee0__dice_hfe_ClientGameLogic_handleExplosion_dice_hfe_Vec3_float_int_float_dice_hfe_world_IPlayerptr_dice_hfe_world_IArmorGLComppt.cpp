// FUNCTION: BF2 0x470ee0
// Thin forwarder that drops `self` and shifts every integer argument left by
// one register. Signature taken from the register/stack shuffle in the ASM,
// not from Ghidra: the two trailing bools arrive as bytes on the stack and are
// re-pushed zero-extended to dwords. Float arguments travel in XMM registers
// the wrapper never touches, so they are absent from these declarations and
// still forwarded correctly.
extern "C" void handle_explosion_48ed90(void* a1, int a2, void* a3, void* a4, int a5,
                                        void* s1, void* s2, void* s3, void* s4,
                                        int s5, int s6);

extern "C" void handle_explosion_475680(void* self, void* a1, int a2, void* a3,
                                        void* a4, int a5, void* s1, void* s2,
                                        void* s3, void* s4, bool s5, bool s6) {
    handle_explosion_48ed90(a1, a2, a3, a4, a5, s1, s2, s3, s4, s5, s6);
}
// REVERSED_FUNCTION: dice_hfe_ClientGameLogic_handleExplosion_dice_hfe_Vec3_float_int_float_dice_hfe_world_IPlayerptr_dice_hfe_world_IArmorGLCompptr_int_dice_hfe_world_IObjectptr_dice_hfe_world_IObjectptr_float_dice_hfe_world_IObjectptr_dice_hfe_world_IObjectptr_float_bool_bool (0x470ee0)

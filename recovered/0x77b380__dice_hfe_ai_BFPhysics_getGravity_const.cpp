// FUNCTION: BF2 0x77b380
extern "C" char* dice_hfe_world_basicPhysicsSystem;
extern "C" void f_77b380() {
    char* p = dice_hfe_world_basicPhysicsSystem;
    (*(void (**)(void*))(*(char**)p + 0x40))(p);
}
// REVERSED_FUNCTION: dice_hfe_ai_BFPhysics_getGravity_const (0x77b380)

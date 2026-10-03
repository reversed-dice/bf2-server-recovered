// FUNCTION: BF2 0x453750
extern "C" char* dice_hfe_world_playerManager;
extern "C" void f_453750() {
    char* p = dice_hfe_world_playerManager;
    (*(void (**)(void*))(*(char**)p + 0x40))(p);
}
// REVERSED_FUNCTION: dice_hfe_GameServer_getPlayer_int_const (0x453750)

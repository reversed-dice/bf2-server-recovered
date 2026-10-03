// FUNCTION: BF2 0x453a70
extern "C" bool f_453a70(char* self) {
    char* p = *(char**)(self + 0xb0);
    if (p == 0) return false;
    return (*(bool (**)(void*))(*(char**)p + 0xf8))(p);
}
// REVERSED_FUNCTION: dice_hfe_GameServer_getConnectionStatus_int_dice_hfe_io_ConnectionStatusref (0x453a70)

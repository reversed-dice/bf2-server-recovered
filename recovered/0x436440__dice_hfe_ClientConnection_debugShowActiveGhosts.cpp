// FUNCTION: BF2 0x436440
extern "C" void dice_hfe_GhostManager_debugShowActiveGhosts(void*);
extern "C" void f_436440(char* self) {
    char* p = *(char**)(self + 0x40);
    if (p != 0) dice_hfe_GhostManager_debugShowActiveGhosts(p);
}
// REVERSED_FUNCTION: dice_hfe_ClientConnection_debugShowActiveGhosts (0x436440)

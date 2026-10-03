// FUNCTION: BF2 0x584180
extern "C" void* g_gameLogic;
extern "C" void handleInputDefault(void*, void*, void*, float, unsigned int);
extern "C" void dice_hfe_world_OverheadCamera_handlePlayerInput(void* self, void* player, void* input, float f, unsigned int u) {
    if (g_gameLogic != 0) {
        if (!((char(*)(void*))(*(void***)g_gameLogic)[0x278 / 8])(g_gameLogic)) return;
    }
    if (*(void**)((char*)self + 0x50) == 0) {
        handleInputDefault(self, player, input, f, u);
    }
}
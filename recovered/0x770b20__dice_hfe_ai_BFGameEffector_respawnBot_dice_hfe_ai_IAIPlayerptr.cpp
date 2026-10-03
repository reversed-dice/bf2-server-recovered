// FUNCTION: BF2 0x770b20
extern "C" void* dice_hfe_gameLogic;

extern "C" void dice_hfe_ai_BFGameEffector_respawnBot_dice_hfe_ai_IAIPlayerptr(
    void* self, void* player) {
    void** gl_obj = *(void***)dice_hfe_gameLogic;
    void* dispatchFn = gl_obj[0xe0 / 8];
    long* pvtable = *(long**)player;
    // Return type must be long to generate MOV RSI,RAX instead of MOV ESI,EAX
    typedef long (*PlayerFunc)(void*);
    long id = ((PlayerFunc)pvtable[0x18 / 8])(player);
    typedef void (*DispatchFunc)(void*, long);
    ((DispatchFunc)dispatchFn)(dice_hfe_gameLogic, id);
}

// FUNCTION: BF2 0x471060
extern "C" void logAssert(int level);
extern "C" void func_4755d0(void* this_, float dt);

extern "C" void dice_hfe_ClientGameLogic_update_float(void* this_, float dt) {
    void** vtable = *(void***)this_;
    int result = ((int(*)(void*))vtable[0x56])(this_);
    if (result == 1) {
        logAssert(1);
    }
    func_4755d0(this_, dt);
}
// REVERSED_FUNCTION: dice_hfe_ClientGameLogic_update_float (0x471060)
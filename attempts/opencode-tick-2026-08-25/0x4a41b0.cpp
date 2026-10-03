typedef void (*VFn)(void*);
extern "C" void dice_hfe_ServerGameLogic_triggerSpecialGameEvent(void* self, int type, void* obj) {
    if (type == 1) {
        if (obj != 0) {
            char s = *(char*)(*(char**)0x0108b660 + 0x7b);
            if (s != 0)
                ((VFn)(*(void***)obj)[0x3b0 / 8])(obj);
        }
    }
}

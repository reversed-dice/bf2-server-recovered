extern "C" void FreeGame_0(void*);
extern "C" void tail_9f870(void*);
extern "C" void dice_hfe_StatsManager_disconnect(void* self) {
    if (*(void**)((char*)self + 0x10) != 0) {
        if (((char(*)(void*))(*(void***)self)[0x40 / 8])(self)) {
            FreeGame_0(*(void**)((char*)self + 0x10));
            *(void**)((char*)self + 0x10) = 0;
        }
    }
    char (*g40)(void*) = ((char(*)(void*))(*(void***)self)[0x40 / 8]);
    if (g40(self)) tail_9f870(self);
}

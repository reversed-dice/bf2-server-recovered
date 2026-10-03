// FUNCTION: BF2 0x73e350
typedef void (*VFn2)(void*, int);
extern "C" void exec_cb(void);
extern "C" void reset_stats(void*);
extern "C" void dice_hfe_LoadStat_unregisterLoadCallback(void* self) {
    *(char*)((char*)self + 0x13) = 1;
    exec_cb();
    ((VFn2)(*(void***)*(void**)0x010aa1a8)[0x40 / 8])(*(void**)0x010aa1a8, 100);
    float v = *(float*)((char*)self + 0x30);
    *(void**)self = 0;
    if (v > *(float*)0x00b2d910)
        *(int*)((char*)self + 0x30) = 0xbf800000;
    reset_stats(self);
}

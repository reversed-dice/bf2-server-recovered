// FUNCTION: BF2 0x591ae0
extern "C" void dice_hfe_world_EditableDecal_handleVisualUpdate_float_float(void* s) {
    long* ptr = *(long**)((char*)s + 536);
    if (ptr != (long*)0) {
        long* vtbl = (long*)*ptr;
        typedef void (*Fn)(void*, int);
        ((Fn)vtbl[32/8])(ptr, 1);
    }
}
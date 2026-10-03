// FUNCTION: BF2 0x6e0df0
// __tcf_0: destructor callback for static array
extern "C" void _ZdlPv(void*);

extern "C" {
    extern long dice_hfe_world_ResponsePhysics_checkObjectVsObject_dice_hfe_world_IObjectptr_dice_hfe_world_IObjectptr_float_bool_vbuf;
    extern long DAT_010a3ca8;
}

void __tcf_0(void*) {
    long begin = dice_hfe_world_ResponsePhysics_checkObjectVsObject_dice_hfe_world_IObjectptr_dice_hfe_world_IObjectptr_float_bool_vbuf;
    long end = DAT_010a3ca8;
    long p = begin;
    if (end != begin) {
        do {
            p += 0xc;
        } while (p != end);
    }
    if (__builtin_expect(begin != 0, 1)) {
        _ZdlPv((void*)begin);
    }
}

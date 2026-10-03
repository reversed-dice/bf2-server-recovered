// FUNCTION: BF2 0x718ea0
// __tcf_3: destructor callback for static array
extern "C" void _ZdlPv(void*);

extern "C" {
    extern long dice_hfe_world_intersectFaces;
    extern long DAT_010a4d68;
}

void __tcf_3(void*) {
    long begin = dice_hfe_world_intersectFaces;
    long end = DAT_010a4d68;
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

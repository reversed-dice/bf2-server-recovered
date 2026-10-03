// FUNCTION: BF2 0x718ed0
// __tcf_2: destructor callback for static array
extern "C" void _ZdlPv(void*);

extern "C" {
    extern long dice_hfe_world_testedFaces;
    extern long DAT_010a4d88;
}

void __tcf_2(void*) {
    long begin = dice_hfe_world_testedFaces;
    long end = DAT_010a4d88;
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

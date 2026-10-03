// FUNCTION: BF2 0x6bb2a0
// __tcf_4: destructor callback for static array
extern "C" void _ZdlPv(void*);

extern "C" {
    extern long dice_anim_RagDoll_applyOnSkeleton_localSpaceCoords;
    extern long DAT_010938e8;
}

void __tcf_4(void*) {
    long begin = dice_anim_RagDoll_applyOnSkeleton_localSpaceCoords;
    long end = DAT_010938e8;
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

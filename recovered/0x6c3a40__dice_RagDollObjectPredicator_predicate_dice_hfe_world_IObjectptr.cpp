namespace dice { namespace hfe {
typedef char (*fn198_t)(void*, int);
typedef unsigned int (*fna8_t)(void*);
bool predicate_0x6c3a40(void* p, void* o) {
    if (((fn198_t)*(void**)((char*)*(void**)o + 0x198))(o, 2) != 0) {
        if (*(void**)((char*)o + 0x90) != 0) {
            void* o2 = *(void**)((char*)o + 0x90);
            unsigned int u = ((fna8_t)*(void**)((char*)*(void**)o2 + 0xa8))(o2);
            if ((u & 0x10) == 0) {
                unsigned int a = *(unsigned int*)((char*)p + 8);
                unsigned int b = *(unsigned int*)((char*)o + 8);
                return a == (a & *(volatile unsigned int*)((char*)o + 8));
            }
        }
    }
    return false;
}
} }
// REVERSED_FUNCTION: dice_RagDollObjectPredicator_predicate_dice_hfe_world_IObjectptr (0x6c3a40)

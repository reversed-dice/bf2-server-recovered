// FUNCTION: BF2 0x73e220
// LoadStat::incLoadCounter 0x73e220 — v2: goto pour fallthrough
namespace dice { namespace hfe {

extern void ls_update(void* self);

void incLoadCounter(void* self, int n) {
    *(int*)((char*)self + 0x34) += n;
    if (*(void**)self == 0)
        goto skip;
    ls_update(self);
skip:
    return;
}

}}

// FUNCTION: BF2 0x52a4d0
// Ladder::getAbsoluteBottom 0x52a4f0 — flag + call + float 0x250
namespace dice { namespace hfe { namespace world {

extern void ladder_update(void* self);

float getAbsoluteBottom(void* self) {
    if (*(unsigned char*)((char*)self + 0x23c) == 0)
        goto skip;
    ladder_update(self);
skip:
    return *(float*)((char*)self + 0x250);
}

}}}

// re-trigger validate 2026-08-06 20:39:37

// FUNCTION: BF2 0x52a4f0
// Ladder::getAbsoluteBottom 0x52a4f0 — flag + call + float 0x24c
namespace dice { namespace hfe { namespace world {

extern void ladder_update(void* self);

float getAbsoluteBottom(void* self) {
    if (*(unsigned char*)((char*)self + 0x23c) == 0)
        goto skip;
    ladder_update(self);
skip:
    return *(float*)((char*)self + 0x24c);
}

}}}

// re-trigger validate 2026-08-06 20:39:37

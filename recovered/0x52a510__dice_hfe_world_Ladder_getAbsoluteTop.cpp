// FUNCTION: BF2 0x52a510
// Ladder::getAbsoluteTop 0x52a510 — v2: goto pour fallthrough
namespace dice { namespace hfe { namespace world {

extern void ladder_update(void* self);

float getAbsoluteTop(void* self) {
    if (*(unsigned char*)((char*)self + 0x23c) == 0)
        goto skip;
    ladder_update(self);
skip:
    return *(float*)((char*)self + 0x248);
}

}}}

// re-trigger validate 2026-08-06 20:38:40

// re-trigger validate 2026-08-07 00:30:25

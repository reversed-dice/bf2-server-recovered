// FUNCTION: BF2 0x52c470
// Ladder::getLadderHeight 0x52c470 — flag + call + float 0x240
namespace dice { namespace hfe { namespace world {

extern void ladder_update(void* self);

float getLadderHeight(void* self) {
    if (*(unsigned char*)((char*)self + 0x23c) == 0)
        goto skip;
    ladder_update(self);
skip:
    return *(float*)((char*)self + 0x240);
}

}}}

// FUNCTION: BF2 0x4d0c50
// Vote::getVoteCount 0x4d0c50 — v2: goto pour fallthrough
namespace dice { namespace hfe {

extern void vote_update(void* self);

void* getVoteCount(void* self) {
    if (*(unsigned char*)((char*)self + 0x60) != 0)
        goto skip;
    vote_update(self);
skip:
    return (char*)self + 0x48;
}

}}

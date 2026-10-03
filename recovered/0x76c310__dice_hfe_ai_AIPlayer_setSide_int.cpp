// FUNCTION: BF2 0x76c310
// AIPlayer::setSide 0x76c310 — deref + virtual + 2e arg 0
namespace dice { namespace hfe { namespace ai {

typedef void (*VF_SIDE)(void*, int, int);

void setSide(void* self, int side) {
    void* a = *(void**)((char*)self + 8);
    VF_SIDE f = (VF_SIDE)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(a) + 0x1c8));
    f(a, side, 0);
}

}}}

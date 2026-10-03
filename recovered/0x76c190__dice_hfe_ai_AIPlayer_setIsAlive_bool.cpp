// FUNCTION: BF2 0x76c190
// AIPlayer::setIsAlive 0x76c190 — deref + virtual
namespace dice { namespace hfe { namespace ai {

typedef void (*VF_ALIVE)(void*, bool);

void setIsAlive(void* self, bool b) {
    void* a = *(void**)((char*)self + 8);
    VF_ALIVE f = (VF_ALIVE)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(a) + 0xd0));
    f(a, b);
}

}}}

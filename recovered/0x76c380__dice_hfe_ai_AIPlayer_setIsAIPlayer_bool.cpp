// FUNCTION: BF2 0x76c380
// AIPlayer::setIsAIPlayer 0x76c380 — deref + virtual
namespace dice { namespace hfe { namespace ai {

typedef void (*VF_SETAI)(void*, bool);

void setIsAIPlayer(void* self, bool b) {
    void* a = *(void**)((char*)self + 8);
    VF_SETAI f = (VF_SETAI)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(a) + 0xc0));
    f(a, b);
}

}}}

// FUNCTION: BF2 0x76c5b0
namespace dice { namespace hfe { namespace ai {
// 0x76c5b0 AIPlayer::setPlayer
extern "C" void* m_iaiPlayerFactory;   // 0x010addd8
extern "C" float DAT_00b2d910;
typedef void (*vfn2v)(void*, void*);
typedef float (*vfn1f)(void*);
void setPlayer_0x76c5b0(void* self, void* player) {
    if (*(void**)((char*)self + 8) != 0) {
        void* g = *(void**)&m_iaiPlayerFactory;
        ((vfn2v*)*(void***)g)[0x50/8](g, self);
    }
    *(void**)((char*)self + 8) = player;
    if (player != 0) {
        void* g = *(void**)&m_iaiPlayerFactory;
        ((vfn2v*)*(void***)g)[0x48/8](g, self);
    }
    if (*(void**)((char*)self + 8) != 0) {
        if (*(float*)((char*)self + 0x14) == DAT_00b2d910) {
            void* p = *(void**)((char*)self + 8);
            *(float*)((char*)self + 0x14) = ((vfn1f*)*(void***)p)[0x110/8](p);
        }
    }
}
} } }

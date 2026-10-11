// FUNCTION: BF2 0x818fd0
#include <cassert>
extern "C" void gsifree(void* ptr);

struct GhiPostData { int m_type; char pad0[4]; void* m_f8; void* m_f10; void* m_f18; void* m_f20; void* m_f28; };

void ghiPostDataFree(GhiPostData* post)
{
    gsifree(post->m_f8);
    if (post->m_type == 0) {
        gsifree(post->m_f10);
    } else if (post->m_type == 1) {
        gsifree(post->m_f10);
        gsifree(post->m_f18);
        gsifree(post->m_f20);
    } else if (post->m_type == 2) {
        gsifree(post->m_f20);
        gsifree(post->m_f28);
    } else {
#line 159 "External/GameSpy/ghttp/ghttpPost.c"
        assert(0);
    }
}

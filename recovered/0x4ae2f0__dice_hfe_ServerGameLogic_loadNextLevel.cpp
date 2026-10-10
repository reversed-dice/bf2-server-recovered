// FUNCTION: BF2 0x4ae2f0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

namespace dice { namespace hfe {

extern void* g_108a2a0;   // dice::hfe::mapList
extern int fn_418a10(void*);
extern void fn_417ea0(void*, int, int);
extern void* fn_418830(void*, int);
extern int fn_4a47d0(void*);

class ServerGameLogic {
public:
    void loadNextLevel();
};

void ServerGameLogic::loadNextLevel()
{
    unsigned char* self = (unsigned char*)this;
    if (fn_418a10(g_108a2a0) == 0)
        return;
    *(int*)(self + 0x494) = -1;
    (*(void (**)(void*, int))(*(char**)self + 0x2c0))(self, 0);
    (*(void (**)(void*))(*(char**)*(void**)0x10c5420 + 0x50))(*(void**)0x10c5420);
    int idx = fn_4a47d0(self);
    *(int*)(self + 0x568) = -1;
    *(int*)(self + 0x564) = idx;
    fn_417ea0(g_108a2a0, idx, 1);
    void* e = fn_418830(g_108a2a0, *(int*)((char*)g_108a2a0 + 8));
    if (e != 0) {
        (*(void (**)(void*, std::string const&, void*))(*(char**)*(void**)0x10a5138 + 0x88))(
            *(void**)0x10a5138, std::string("GSLoadLevel"), e);
        (*(void (**)(void*, void*))(*(char**)*(void**)0x10c5420 + 0x48))(
            *(void**)0x10c5420, e);
    }
    *(int*)(self + 0x4b0) = 0;
}

} }

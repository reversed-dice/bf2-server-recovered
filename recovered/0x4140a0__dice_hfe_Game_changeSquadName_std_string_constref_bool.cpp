// FUNCTION: BF2 0x4140a0
#include <string>

namespace dice { namespace hfe {

class Game {
public:
    void changeSquadName(const std::string& name, bool flag);
};

typedef void* (*FnGet)(void*);
typedef int   (*FnInt)(void*);
typedef bool  (*FnChange)(void*, int, int, int, const std::string*, int);

void Game::changeSquadName(const std::string& name, bool flag)
{
    void* p = ((FnGet)(*(void***)*(void**)0x112ee38)[0x60 / 8])(*(void**)0x112ee38);
    if (p == 0) return;
    if (*(void**)0x10b8c00 == 0) return;
    FnChange f = (FnChange)(*(void***)*(void**)0x10b8c00)[0x38 / 8];
    int c = ((FnInt)(*(void***)p)[0xa8 / 8])(p);
    int b = ((FnInt)(*(void***)p)[0x218 / 8])(p);
    int a = ((FnInt)(*(void***)p)[0x1d0 / 8])(p);
    bool ok = f(*(void**)0x10b8c00, a, b, c, &name, 0);
    if (!ok)
        ((void (*)(void*, int, int, int, float))(*(void***)*(void**)0x10b3730)[0x28 / 8])(*(void**)0x10b3730, 2, 0xf, 0, 0.0f);
}

} }

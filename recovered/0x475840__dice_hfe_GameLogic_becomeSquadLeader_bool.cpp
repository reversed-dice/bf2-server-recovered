// FUNCTION: BF2 0x475840
// v03: bool-returning Fn typedefs, fn locals hoisted, c local
namespace dice { namespace hfe {

typedef void* (*FnGet)(void*);
typedef void* (*FnGetId)(void*, int);
typedef int   (*FnInt)(void*);
typedef char  (*FnBool)(void*);
typedef int   (*Fn2)(void*, int, int);
typedef bool  (*Fn4)(void*, int, int, int);
typedef bool  (*Fn5)(void*, int, int, int, int);

class GameLogic {
public:
    unsigned char m_pad[0x4e8];
    bool becomeSquadLeader(bool flag);
};

bool GameLogic::becomeSquadLeader(bool flag)
{
    void* p = ((FnGet)(*(void***)*(void**)0x112ee38)[0x60 / 8])(*(void**)0x112ee38);
    if (flag) {
        if (p == 0)
            return false;
        if (((FnBool)(*(void***)p)[0x278 / 8])(p))
            return false;
        int a = ((FnInt)(*(void***)p)[0x1d0 / 8])(p);
        int b = ((FnInt)(*(void***)p)[0x218 / 8])(p);
        FnGetId g = (FnGetId)(*(void***)*(void**)0x112ee38)[0x40 / 8];
        int id = ((Fn2)(*(void***)*(void**)0x10b8c00)[0x78 / 8])(*(void**)0x10b8c00, a, b);
        void* q = g(*(void**)0x112ee38, id);
        if (q == 0)
            return false;
        if (!((FnBool)(*(void***)q)[0xc8 / 8])(q))
            return false;
        Fn5 f = (Fn5)(*(void***)*(void**)0x10b8c00)[0x70 / 8];
        return f(*(void**)0x10b8c00, a, b, ((FnInt)(*(void***)p)[0xa8 / 8])(p), 0);
    }
    if (p == 0)
        return false;
    if (!((FnBool)(*(void***)p)[0x278 / 8])(p))
        return false;
    int a = ((FnInt)(*(void***)p)[0x1d0 / 8])(p);
    int b = ((FnInt)(*(void***)p)[0x218 / 8])(p);
    Fn4 f = (Fn4)(*(void***)*(void**)0x10b8c00)[0xa8 / 8];
    return f(*(void**)0x10b8c00, a, b, ((FnInt)(*(void***)p)[0xa8 / 8])(p));
}

} }

// FUNCTION: BF2 0x511980
namespace dice {
namespace hfe {

class SingletonServer {
public:
    static void* m_iNametagManager;
};

extern void* gameLogic;
extern void* game;
extern unsigned int IID_IGameServer;

namespace world {

void Bundle_init(void* self);
void ControlPoint_addFlags(void* self);

void ControlPoint_init(void* self)
{
    Bundle_init(self);
    *(unsigned char*)((char*)self + 0xf0) = 1;

    void* gl = gameLogic;
    void* sub = *(void**)((char*)self + 0x248);
    ((void (*)(void*, void*, int))(*(void***)gl)[0x2e0 / 8])(gl, self, *(int*)((char*)sub + 0x248));

    void* nm = SingletonServer::m_iNametagManager;
    if (nm)
        ((void (*)(void*, void*))(*(void***)nm)[0x40 / 8])(nm, self);

    ControlPoint_addFlags(self);

    void* g = game;
    void* r = ((void* (*)(void*, unsigned int))(*(void***)g)[0x18 / 8])(g, IID_IGameServer);
    if (r)
        ((void (*)(void*, int, int))(*(void***)self)[0xc0 / 8])(self, 0x602, 1);
}

}
}
}

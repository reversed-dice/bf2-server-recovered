// FUNCTION: BF2 0x496e80
extern "C" void* fn_407508(unsigned long);
extern "C" void fn_439b10(void*);
extern "C" void* g_game;          // dice::hfe::game
extern "C" void* g_playerManager; // dice::hfe::world::playerManager
extern "C" unsigned int g_IID_IGameServer;

extern "C" void f_496e80(char* self, bool enabled)
{
    *(unsigned char*)(self + 0x3e8) = (unsigned char)enabled;
    void* g = g_game;
    void* server = ((void* (*)(void*, unsigned int))(*(void***)g)[0x18 / 8])(g, g_IID_IGameServer);
    if (g_game != 0) {
        void* pm = g_playerManager;
        void* me = ((void* (*)(void*))(*(void***)pm)[0x60 / 8])(pm);
        if (self == me) {
            if (server == 0) {
                void (*send)(void*, int, void*) = (void (*)(void*, int, void*))(*(void***)g_game)[0x120 / 8];
                void* ev = fn_407508(0x18);
                unsigned int a = *(unsigned int*)(self + 0xd4);
                unsigned char b = *(unsigned char*)(self + 0x3e8);
                fn_439b10(ev);
                *(void**)ev = (void*)0xb2eab0;
                *(unsigned char*)((char*)ev + 0x10) = (unsigned char)a;
                *(unsigned char*)((char*)ev + 0x11) = b;
                send(g_game, -1, ev);
            }
        }
    }
}

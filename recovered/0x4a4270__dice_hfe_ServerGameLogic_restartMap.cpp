// FUNCTION: BF2 0x4a4270
extern "C" void* game;
extern "C" unsigned int IID_IGameServer;
extern "C" void AutoRecorder_roundFinished(void*);
void f_4a4270(char* s)
{
    char* g = (char*)game;
    if (g != 0) {
        char* gs = (char*)((void* (*)(void*, unsigned int))(*(void***)g)[0x18 / 8])(g, IID_IGameServer);
        if (gs != 0) {
            char* a = (char*)((void* (*)(void*))(*(void***)gs)[0x170 / 8])(gs);
            if (a != 0) {
                char* b = (char*)((void* (*)(void*))(*(void***)gs)[0x170 / 8])(gs);
                AutoRecorder_roundFinished(b);
            }
        }
    }
    *(int*)(s + 0x494) = -1;
    ((void (*)(void*, int))(*(void***)s)[0x2c0 / 8])(s, 0);
    return ((void (*)(void*))(*(void***)s)[0x48 / 8])(s);
}

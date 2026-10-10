// FUNCTION: BF2 0x4947b0
// BF2_FLAGS: -fno-strict-aliasing
extern "C" void* gameLogic;
extern "C" void* squadManager;
extern "C" void* VoipServerConnection_GetInstance();
extern "C" void VoipServerConnection_UpdatePlayerRouting(void*, void*);

void f_4947b0(char* self, int v)
{
    *(bool*)(self + 0x135) = (v != 0);
    if (((bool (*)(void*))(*(void***)gameLogic)[0x278 / 8])(gameLogic) != 0) {
        if (*(char*)(self + 0xf4) == 0) {
            void* vc = VoipServerConnection_GetInstance();
            VoipServerConnection_UpdatePlayerRouting(vc, self);
        }
    }
    ((void (*)(void*, void*))(*(void***)squadManager)[0x128 / 8])(squadManager, self);
}

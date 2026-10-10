// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x495f80
extern "C" void* nametagManager;
extern "C" void* playerManager;
extern "C" void* gameLogic;
extern "C" void* squadManager;
extern "C" void* VoipServerConnection_GetInstance();
extern "C" void VoipServerConnection_UpdatePlayerRouting(void*, void*);
void f_495f80(char* self, unsigned short id)
{
    *(unsigned int*)(self + 0x130) = id;
    if (nametagManager != 0) {
        char* p = (char*)((void* (*)(void*))(*(void***)playerManager)[0x60 / 8])(playerManager);
        if (p != 0) {
            int a = ((int (*)(void*))(*(void***)self)[0xa8 / 8])(self);
            int b = ((int (*)(void*))(*(void***)p)[0xa8 / 8])(p);
            if (a == b)
                ((void (*)(void*, void*))(*(void***)squadManager)[0x128 / 8])(squadManager, p);
        }
    }
    if (((unsigned char (*)(void*))(*(void***)gameLogic)[0x278 / 8])(gameLogic) != 0) {
        if (*(unsigned char*)(self + 0xf4) == 0)
            return VoipServerConnection_UpdatePlayerRouting(VoipServerConnection_GetInstance(), self);
    }
}

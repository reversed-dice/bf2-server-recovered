// FUNCTION: BF2 0x49e440
// BF2_FLAGS: -fno-strict-aliasing
extern "C" void* gameLogic;
extern "C" void* squadManager;
extern "C" void* g_system;
extern "C" void* VoipServerConnection_GetInstance();
extern "C" void VoipServerConnection_UpdatePlayerRouting(void*, void*);

struct P {
    char _pad0[0x134];
    unsigned char m_134;
    char _pad135[0x23];
    long m_158;
};

void f_49e440(P* self, int v)
{
    if (v != 0) {
        self->m_158 = 0;
    }
    if (self->m_134 != 0) {
        if (v == 0) {
            void (*f)(void*) = (void (*)(void*))(*(void***)self)[0x250 / 8];
            ((void (*)(void*))(*(void***)g_system)[0x30 / 8])(g_system);
            f(self);
            if (((bool (*)(void*))(*(void***)gameLogic)[0x278 / 8])(gameLogic) != 0) {
                ((void (*)(void*, unsigned int))(*(void***)squadManager)[0xf0 / 8])(squadManager,
                    ((unsigned int (*)(void*))(*(void***)self)[0xa8 / 8])(self));
            }
        }
    }
    self->m_134 = (v != 0);
    if (((bool (*)(void*))(*(void***)gameLogic)[0x278 / 8])(gameLogic) != 0) {
        void* vc = VoipServerConnection_GetInstance();
        VoipServerConnection_UpdatePlayerRouting(vc, self);
    }
}

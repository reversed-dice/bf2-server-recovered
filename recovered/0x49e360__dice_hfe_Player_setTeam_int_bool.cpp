// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x49e360
extern "C" void* eventManager;
extern "C" void* nametagManager;
extern "C" void* playerManager;
extern "C" void* ClientVoteManager_GetInstance();
extern "C" void ClientVoteManager_requestStateUpdate(void*, int);
struct S { int id; int team; };
void f_49e360(char* self, int team, bool flag)
{
    if (*(int*)(self + 0xf8) == team)
        return;
    S s;
    s.id = *(int*)(self + 0xd4);
    s.team = team;
    ((void (*)(void*, int, unsigned int, S*, float))(*(void***)eventManager)[0x28 / 8])(eventManager, 0, 8, &s, 0.0f);
    *(int*)(self + 0x110) = 0;
    *(int*)(self + 0xf8) = team;
    ((void (*)(void*, void*))(*(void***)nametagManager)[0x38 / 8])(nametagManager, self);
    if (!flag) {
        *(int*)(self + 0xfc) = 0;
        *(unsigned char*)(self + 0x100) = 0;
    } else {
        *(unsigned char*)(self + 0x100) = 1;
    }
    if (*(unsigned char*)(self + 0xf4) != 0)
        return;
    if ((char*)((void* (*)(void*))(*(void***)playerManager)[0x60 / 8])(playerManager) != self)
        return;
    int id = ((int (*)(void*))(*(void***)self)[0xa8 / 8])(self);
    ClientVoteManager_requestStateUpdate(ClientVoteManager_GetInstance(), id);
}

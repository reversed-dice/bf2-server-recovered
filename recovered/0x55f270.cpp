extern "C" void* g_gameLogic;
typedef void (*vfn1)(void*, void*);
extern "C" void parentDestroy_589360(void*, bool);

extern "C" void destroy_55f270(void* self, bool flag)
{
    if (*(char*)((char*)self + 0x244)) {
        *(char*)((char*)self + 0x244) = 0;
        ((vfn1)(*(void***)g_gameLogic)[0x368/8])(g_gameLogic, self);
    }
    parentDestroy_589360(self, flag);
}

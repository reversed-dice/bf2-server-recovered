// FUNCTION: BF2 0x494a10
// BF2_FLAGS: -fno-tree-pre
extern "C" unsigned int IID_IPlayerControlObject;
extern "C" void getEngineFromChildsAndSiblings(void*, char**);
int f_494a10(char* self)
{
    char* a = (char*)((void* (*)(void*))(*(void***)self)[0x148 / 8])(self);
    char* b = (char*)((void* (*)(void*))(*(void***)self)[0x90 / 8])(self);
    if (a == b)
        return 0;
    char* c = (char*)((void* (*)(void*))(*(void***)self)[0x90 / 8])(self);
    char* eng = 0;
    getEngineFromChildsAndSiblings(c, &eng);
    char* o = (char*)((void* (*)(void*))(*(void***)self)[0x90 / 8])(self);
    char* pco = 0;
    for (;;) {
        if (o == 0) {
            pco = 0;
            break;
        }
        pco = (char*)((void* (*)(void*, unsigned int))(*(void***)o)[3])(o, IID_IPlayerControlObject);
        if (pco != 0)
            break;
        o = *(char**)(o + 0x50);
    }
    int r = 0;
    if (((int (*)(void*))(*(void***)pco)[0x60 / 8])(pco) == 0) {
        if (eng != 0) {
            if (((int (*)(void*))(*(void***)eng)[0x358 / 8])(eng) == 0x21)
                r = 1;
        }
    }
    return r;
}

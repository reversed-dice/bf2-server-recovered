typedef int (*vfn1)(void*);
extern "C" void* g_iaiSettings_78ebd0;
extern "C" void AIObject_ctor_78c560(void* self);

extern "C" void AIObjectReal_ctor_78ebd0(void* self, void* tpl, int param3, void* param4)
{
    AIObject_ctor_78c560(self);
    *(void* volatile*)((char*)self + 0) = (void*)0xba5d50;
    *(volatile int*)((char*)self + 0x60) = 1;
    *(volatile int*)((char*)self + 0x14) = param3;
    *(void* volatile*)((char*)self + 0x20) = param4;
    int n = ((vfn1)(*(void***)g_iaiSettings_78ebd0)[0x80/8])(g_iaiSettings_78ebd0);
    int c = n + 1;
    if (c > 0) {
        char* p = (char*)self;
        int i = 0;
        do {
            *(volatile int*)(p + 0x64) = -1;
            p += 4;
            i++;
        } while (i != c);
    }
}

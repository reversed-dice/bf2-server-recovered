// FUNCTION: BF2 0x81bd40
extern "C" void gsifree(void* p);
extern "C" void* ArrayNth(void* array, int index);
extern "C" void ArrayDeleteAt(void* array, int index);
extern "C" int ArrayLength(void* array);
extern "C" void __assert_fail(const char* expr, const char* file, unsigned int line, const char* fn) __attribute__((noreturn));
extern void* piCallbacks;

typedef void (*piCallbackFn)(int, unsigned short, int, void*, int, void*);

struct piCallback
{
    int a;
    unsigned short b;
    int c;
    void* data;
    int len;
    int pad0;
    void* d;
    piCallbackFn callbackFunc;
};

void piCallCallbacks()
{
    while (ArrayLength(piCallbacks) > 0)
    {
        piCallback* cb = (piCallback*)ArrayNth(piCallbacks, 0);
        piCallback local;

        if (cb == 0)
            __assert_fail("callback", "External/GameSpy/pinger/pingerMain.c", 0x185, "piCallCallbacks");

        local = *cb;
        ArrayDeleteAt(piCallbacks, 0);

        local.callbackFunc(local.a, local.b, local.c, local.data, local.len, local.d);
        gsifree(local.data);
    }
}

// FUNCTION: BF2 0x81bca0
extern "C" void* gsimalloc(unsigned long size);
extern "C" void* memcpy(void* dst, const void* src, unsigned long n);
extern "C" void ArrayAppend(void* array, void* item);
extern "C" void __assert_fail(const char* expr, const char* file, unsigned int line, const char* fn) __attribute__((noreturn));
extern void* piCallbacks;

struct piCallback
{
    int a;
    unsigned short b;
    int c;
    void* data;
    unsigned int len;
    int pad0;
    void* d;
    void* callbackFunc;
};

void piQueueCallback(int a, unsigned short b, int c, void* data, unsigned int len, void* d, void* callbackFunc)
{
    piCallback cb;

    if (callbackFunc == 0)
        __assert_fail("callbackFunc", "External/GameSpy/pinger/pingerMain.c", 0x15b, "piQueueCallback");

    cb.a = a;
    cb.b = b;
    cb.c = c;
    cb.len = len;
    cb.d = d;
    cb.callbackFunc = callbackFunc;

    if (data == 0)
    {
        cb.data = 0;
    }
    else
    {
        cb.data = gsimalloc(len);
        if (cb.data == 0)
            return;
        memcpy(cb.data, data, len);
    }

    ArrayAppend(piCallbacks, &cb);
}

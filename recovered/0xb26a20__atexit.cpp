// FUNCTION: BF2 0xb26a20
// atexit at 0xb26a20
extern "C" int __cxa_atexit(void (*)(void*), void*, void*);

extern "C" void* __dso_handle;

int my_atexit(void (*func)(void*)) {
    void* handle = 0;
    if (__dso_handle != 0) {
        handle = *(void**)__dso_handle;
    }
    return __cxa_atexit(func, 0, handle);
}

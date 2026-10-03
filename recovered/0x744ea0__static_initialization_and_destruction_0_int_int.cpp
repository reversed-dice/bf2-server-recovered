// FUNCTION: BF2 0x744ea0
extern "C" int __cxa_atexit(void*, void*, void*);
extern "C" void* __dso_handle;

void static_init(int init, int priority) {
    if (init != 1) return;
    if (priority != 0xffff) return;
    __cxa_atexit((void*)0x744e90, 0, &__dso_handle);
}

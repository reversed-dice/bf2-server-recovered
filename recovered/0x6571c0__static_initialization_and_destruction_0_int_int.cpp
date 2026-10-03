// FUNCTION: BF2 0x6571c0
// static_initialization_and_destruction_0(int, int) - try DEC pattern
extern "C" {
    void _ZNSsC1EPKcRKSaIcE(long* str, const char* s, char* alloc);
    void __cxa_atexit(void (*dtor)(void*), void* obj, void* dso);
    extern long dice_hfe_fetchUrlPrefix;
    extern char __dso_handle;
}

void __tcf_0(void*) {}

void static_initialization_and_destruction_0(int param_1, int param_2) {
    if (param_1-- == 1 && param_2 == 0xffff) {
        char local_1;
        _ZNSsC1EPKcRKSaIcE(&dice_hfe_fetchUrlPrefix,
            "http://stage-net.gamespy.com/bf2/getplayerinfo.aspx?pid=", &local_1);
        __cxa_atexit(__tcf_0, 0, &__dso_handle);
    }
}

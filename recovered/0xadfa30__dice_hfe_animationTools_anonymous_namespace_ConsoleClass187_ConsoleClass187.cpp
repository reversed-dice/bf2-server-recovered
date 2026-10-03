namespace dice { namespace hfe { namespace tool { namespace anonymous_namespace {
extern "C" void* g_10a5050;
extern "C" unsigned int g_10a504c;
extern "C" unsigned char g_10a5048;
extern "C" void* fn_407508(unsigned int n);
extern "C" void fn_407e78(void* p, void* name);
void eom_adfa30(char* self) {
    void* g = g_10a5050;
    *(void* volatile*)(self + 0x18) = (void*)0xc9128c;
    *(void* volatile*)(self + 0x0) = (void*)0xc8cc90;
    *(volatile char*)(self + 0x109) = 1;
    *(volatile int*)(self + 0x8) = 2;
    *(void* volatile*)(self + 0x10) = (void*)g;
    *(volatile int*)(self + 0x20) = g_10a504c;
    unsigned char b = g_10a5048;
    *(volatile int*)(self + 0x28) = 0;
    *(volatile int*)(self + 0x2c) = 0;
    *(void* volatile*)(self + 0x88) = (void*)0xb3b221;
    *(volatile char*)(self + 0x108) = 0;
    *(volatile char*)(self + 0x24) = b;
    void* p = fn_407508(0x18);
    *(void* volatile*)((char*)p + 0x10) = (void*)self;
    fn_407e78(p, (void*)0x1140720);
}
} } } }
// REVERSED_FUNCTION: test (0xadfa30)

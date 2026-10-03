namespace dice { namespace hfe {
extern "C" void* g_108f1b0;
void eom_567a80(char* self) {
    char* a = self + 0x8;
    char* d = self + 0x20;
    *(void* volatile*)(self + 0x0) = (void*)0xb536a0;
    *(void* volatile*)(self + 0x8) = (void*)a;
    *(void* volatile*)(a + 0x8) = (void*)a;
    char* b = self + 0x18;
    *(void* volatile*)(b + 0x8) = (void*)0x0;
    *(void* volatile*)(b + 0x28) = (void*)0x0;
    *(volatile int*)(b + 0x8) = 0;
    *(void* volatile*)(b + 0x10) = (void*)0x0;
    *(void* volatile*)(b + 0x18) = (void*)d;
    *(void* volatile*)(b + 0x20) = (void*)d;
    *(void* volatile*)(self + 0x48) = (void*)0x0;
    if (g_108f1b0 == 0) {
        g_108f1b0 = self;
    }
    *(void* volatile*)(self + 0x48) = *(void* volatile*)(self + 0x8);
}
} }
// REVERSED_FUNCTION: test (0x567a80)

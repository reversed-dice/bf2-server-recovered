namespace dice { namespace hfe {
extern "C" void fn_5f5f10(void* p);
void eom_5f4650(char* self, void* obj) {
    fn_5f5f10(self);
    char* a = self + 0x178;
    char* d = self + 0x180;
    *(void* volatile*)(self + 0x0) = (void*)0xb72930;
    *(void* volatile*)(self + 0x20) = (void*)0xb72b98;
    *(volatile int*)(self + 0x160) = 1;
    *(volatile int*)(self + 0x164) = 0;
    *(volatile int*)(self + 0x168) = 0;
    *(volatile char*)(self + 0x16c) = 0;
    *(volatile int*)(self + 0x170) = 1;
    *(volatile int*)(self + 0x174) = 0;
    *(void* volatile*)(a + 0x8) = (void*)0x0;
    *(void* volatile*)(a + 0x28) = (void*)0x0;
    *(volatile int*)(a + 0x8) = 0;
    *(void* volatile*)(a + 0x10) = (void*)0x0;
    *(void* volatile*)(a + 0x18) = (void*)d;
    *(void* volatile*)(a + 0x20) = (void*)d;
    *(void* volatile*)(self + 0x1d8) = (void*)obj;
    *(volatile int*)(self + 0x1a8) = 0;
    *(volatile char*)(self + 0x1ac) = 0;
    *(volatile int*)(self + 0x1b0) = 0;
    *(volatile int*)(self + 0x1b4) = 0;
    *(volatile char*)(self + 0x1b8) = 0;
    *(volatile int*)(self + 0x1bc) = 0;
    *(volatile char*)(self + 0x1c0) = 0;
    *(void* volatile*)(self + 0x1c8) = (void*)0x0;
    *(volatile char*)(self + 0x1d0) = 0;
}
} }
// REVERSED_FUNCTION: test (0x5f4650)

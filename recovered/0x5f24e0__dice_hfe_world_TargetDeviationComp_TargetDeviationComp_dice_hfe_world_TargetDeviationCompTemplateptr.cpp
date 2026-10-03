namespace dice { namespace hfe {
extern "C" void fn_5ef770(void* p);
void eom_5f24e0(char* self, void* obj) {
    fn_5ef770(self);
    char* a = self + 0x60;
    char* d = self + 0x68;
    *(void* volatile*)(self + 0x0) = (void*)0xb72470;
    *(void* volatile*)(self + 0x20) = (void*)0xb725f8;
    *(volatile int*)(self + 0x48) = 1;
    *(void* volatile*)(self + 0x50) = (void*)0x759dc150;
    *(volatile int*)(self + 0x58) = 0;
    *(void* volatile*)(a + 0x8) = (void*)0x0;
    *(void* volatile*)(a + 0x28) = (void*)0x0;
    *(volatile int*)(a + 0x8) = 0;
    *(void* volatile*)(a + 0x10) = (void*)0x0;
    *(void* volatile*)(a + 0x18) = (void*)d;
    *(void* volatile*)(a + 0x20) = (void*)d;
    *(void* volatile*)(self + 0x90) = (void*)obj;
}
} }
// REVERSED_FUNCTION: test (0x5f24e0)

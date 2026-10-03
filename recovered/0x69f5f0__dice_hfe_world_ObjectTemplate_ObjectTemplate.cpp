namespace dice { namespace hfe {
extern "C" void fn_686b00(void* p);
void eom_69f5f0(char* self) {
    fn_686b00(self);
    char* a = self + 0x30;
    char* d = self + 0x38;
    *(void* volatile*)(self + 0x0) = (void*)0xb8f190;
    *(void* volatile*)(self + 0x10) = (void*)0xb8f370;
    *(void* volatile*)(self + 0x18) = (void*)0xf6c6e8;
    *(void* volatile*)(self + 0x20) = (void*)0xf6c6e8;
    *(volatile int*)(self + 0x28) = 0;
    *(volatile int*)(self + 0x2c) = 0;
    *(void* volatile*)(a + 0x8) = (void*)0x0;
    *(void* volatile*)(a + 0x28) = (void*)0x0;
    *(volatile int*)(a + 0x8) = 0;
    *(void* volatile*)(a + 0x10) = (void*)0x0;
    *(void* volatile*)(a + 0x18) = (void*)d;
    *(void* volatile*)(a + 0x20) = (void*)d;
    *(volatile int*)(self + 0x60) = (int)0x3f800000;
    *(volatile int*)(self + 0x64) = 0;
}
} }
// REVERSED_FUNCTION: test (0x69f5f0)

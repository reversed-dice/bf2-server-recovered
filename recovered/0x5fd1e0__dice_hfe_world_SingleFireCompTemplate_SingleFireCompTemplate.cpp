namespace dice { namespace hfe {
extern "C" void fn_5f5e40(void* p);
void eom_5fd1e0(char* self) {
    fn_5f5e40(self);
    char* a = self + 0x90;
    *(void* volatile*)(self + 0x0) = (void*)0xb74e10;
    *(void* volatile*)(self + 0x8) = (void*)0xb74e98;
    *(volatile int*)(self + 0x8c) = 1;
    *(void* volatile*)(self + 0x90) = (void*)0x0;
    *(void* volatile*)(a + 0x8) = (void*)0x0;
    *(void* volatile*)(a + 0x10) = (void*)0x0;
    *(volatile char*)(self + 0xa8) = 0;
    *(volatile char*)(self + 0xa9) = 0;
    *(volatile int*)(self + 0xac) = 0;
    *(volatile int*)(self + 0xb0) = 0;
}
} }
// REVERSED_FUNCTION: test (0x5fd1e0)

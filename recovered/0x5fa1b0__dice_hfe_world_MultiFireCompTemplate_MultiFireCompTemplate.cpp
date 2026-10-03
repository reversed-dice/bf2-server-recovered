namespace dice { namespace hfe {
extern "C" void fn_5f5e40(void* p);
void eom_5fa1b0(char* self) {
    fn_5f5e40(self);
    char* a = self + 0x98;
    *(void* volatile*)(self + 0x0) = (void*)0xb74710;
    *(void* volatile*)(self + 0x8) = (void*)0xb74798;
    *(volatile int*)(self + 0x8c) = 1;
    *(volatile char*)(self + 0x90) = 0;
    *(void* volatile*)(self + 0x98) = (void*)a;
    *(void* volatile*)(a + 0x8) = (void*)a;
    *(volatile char*)(self + 0xa8) = 1;
}
} }
// REVERSED_FUNCTION: test (0x5fa1b0)

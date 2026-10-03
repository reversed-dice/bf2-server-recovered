namespace dice { namespace hfe {
extern "C" void fn_5eb620(void* p);
void eom_5ed840(char* self, void* obj) {
    fn_5eb620(self);
    char* a = self + 0x90;
    *(void* volatile*)(self + 0x0) = (void*)0xb70b90;
    *(void* volatile*)(self + 0x20) = (void*)0xb70d98;
    *(volatile int*)(self + 0x88) = 1;
    *(void* volatile*)(self + 0x90) = (void*)0x0;
    *(void* volatile*)(a + 0x8) = (void*)0x0;
    *(void* volatile*)(a + 0x10) = (void*)0x0;
    a = self + 0xc0;
    *(void* volatile*)(self + 0xb0) = (void*)obj;
    *(volatile char*)(self + 0xa8) = 0;
    *(volatile char*)(self + 0xa9) = 0;
    *(volatile int*)(self + 0xb8) = 0;
    *(void* volatile*)(self + 0xc0) = (void*)0x0;
    *(void* volatile*)(a + 0x8) = (void*)0x0;
    *(void* volatile*)(a + 0x10) = (void*)0x0;
}
} }
// REVERSED_FUNCTION: test (0x5ed840)

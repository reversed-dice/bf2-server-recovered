namespace dice { namespace hfe {
extern "C" void fn_74af30(void* p);
void eom_840df0(char* self) {
    fn_74af30(self + 0x10);
    char* a = self + 0x18;
    *(void* volatile*)(self + 0x18) = (void*)0x0;
    *(void* volatile*)(a + 0x8) = (void*)0x0;
    *(void* volatile*)(a + 0x10) = (void*)0x0;
    *(volatile char*)(self + 0x0) = 0;
    *(volatile int*)(self + 0x30) = 1;
    *(void* volatile*)(self + 0x8) = (void*)0x0;
}
} }
// REVERSED_FUNCTION: test (0x840df0)

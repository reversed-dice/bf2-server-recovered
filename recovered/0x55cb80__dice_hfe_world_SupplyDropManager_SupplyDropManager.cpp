namespace dice { namespace hfe {
extern "C" void fn_55c810(void* p);
void eom_55cb80(char* self) {
    char* a = self + 0x8;
    char* s = self + 0x10;
    *(void* volatile*)(self + 0x0) = (void*)0xb50830;
    *(void* volatile*)(a + 0x8) = (void*)0x0;
    *(void* volatile*)(a + 0x28) = (void*)0x0;
    *(volatile int*)(a + 0x8) = 0;
    *(void* volatile*)(a + 0x10) = (void*)0x0;
    *(void* volatile*)(a + 0x18) = (void*)s;
    *(void* volatile*)(a + 0x20) = (void*)s;
    fn_55c810(self);
}
} }
// REVERSED_FUNCTION: test (0x55cb80)

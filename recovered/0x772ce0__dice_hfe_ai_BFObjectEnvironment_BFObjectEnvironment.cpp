namespace dice { namespace hfe {
extern "C" void fn_77de30(void* p);
void eom_772ce0(char* self) {
    fn_77de30(self);
    char* a = self + 0x8;
    *(void* volatile*)(self + 0x0) = (void*)0xba1ad0;
    *(void* volatile*)(self + 0x8) = (void*)0x0;
    *(void* volatile*)(a + 0x8) = (void*)0x0;
    *(void* volatile*)(a + 0x10) = (void*)0x0;
    char* b = self + 0x20;
    *(void* volatile*)(self + 0x20) = (void*)0x0;
    *(void* volatile*)(b + 0x8) = (void*)0x0;
    *(void* volatile*)(b + 0x10) = (void*)0x0;
    char* c = self + 0x38;
    *(void* volatile*)(self + 0x38) = (void*)0x0;
    *(void* volatile*)(c + 0x8) = (void*)0x0;
    *(void* volatile*)(c + 0x10) = (void*)0x0;
    *(volatile char*)(self + 0x50) = 0;
    *(void* volatile*)(self + 0x58) = (void*)0x0;
}
} }
// REVERSED_FUNCTION: test (0x772ce0)

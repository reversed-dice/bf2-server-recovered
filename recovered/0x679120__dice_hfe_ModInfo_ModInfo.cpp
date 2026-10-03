namespace dice { namespace hfe {
void eom_679120(char* self) {
    char* a = self + 0x10;
    *(void* volatile*)(self + 0x0) = (void*)0xb8bf30;
    *(volatile int*)(self + 0x8) = 1;
    *(void* volatile*)(self + 0x10) = (void*)0x0;
    *(void* volatile*)(a + 0x8) = (void*)0x0;
    *(void* volatile*)(a + 0x10) = (void*)0x0;
    char* b = self + 0x30;
    *(volatile char*)(self + 0x28) = 0;
    char* s = self + 0x38;
    *(void* volatile*)(b + 0x8) = (void*)0x0;
    *(void* volatile*)(b + 0x28) = (void*)0x0;
    *(volatile int*)(b + 0x8) = 0;
    *(void* volatile*)(b + 0x10) = (void*)0x0;
    *(void* volatile*)(b + 0x18) = (void*)s;
    *(void* volatile*)(b + 0x20) = (void*)s;
}
} }
// REVERSED_FUNCTION: test (0x679120)

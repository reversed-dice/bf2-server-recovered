namespace dice { namespace hfe {
void eom_7bb6f0(char* self) {
    char* a = self + 0x18;
    char* d = self + 0x20;
    *(long* volatile*)(self + 0x0) = 0;
    *(long* volatile*)(self + 0x8) = 0;
    *(long* volatile*)(self + 0x10) = 0;
    *(long* volatile*)(a + 0x8) = 0;
    *(char** volatile*)(a + 0x18) = (char**)d;
    *(volatile int*)(a + 0x8) = 0;
    *(char** volatile*)(a + 0x20) = (char**)d;
    char* e = self + 0x50;
    *(long* volatile*)(a + 0x28) = 0;
    *(long* volatile*)(a + 0x10) = 0;
    char* f = self + 0x48;
    *(long* volatile*)(f + 0x8) = 0;
    *(long* volatile*)(f + 0x28) = 0;
    *(volatile int*)(f + 0x8) = 0;
    *(long* volatile*)(f + 0x10) = 0;
    *(char** volatile*)(f + 0x18) = (char**)e;
    *(char** volatile*)(f + 0x20) = (char**)e;
    char* g = self + 0x78;
    *(long* volatile*)(g + 0x8) = 0;
    *(long* volatile*)(g + 0x28) = 0;
    *(volatile int*)(g + 0x8) = 0;
    *(long* volatile*)(g + 0x10) = 0;
    *(char** volatile*)(g + 0x18) = (char**)(self + 0x80);
    *(char** volatile*)(g + 0x20) = (char**)(self + 0x80);
}
} }
// REVERSED_FUNCTION: test (0x7bb6f0)

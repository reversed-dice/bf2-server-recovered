namespace dice { namespace hfe { namespace ai {
extern "C" void* m_instance_793940;
void eom_793940(char* self, int p2) {
    char* a = self + 0x8;
    char* d = self + 0x10;
    *(void* volatile*)self = (void*)0xba7060;
    *(long* volatile*)(a + 0x8) = 0;
    *(char** volatile*)(a + 0x18) = (char**)d;
    *(volatile int*)(a + 0x8) = 0;
    *(char** volatile*)(a + 0x20) = (char**)d;
    char* e = self + 0x50;
    *(long* volatile*)(a + 0x28) = 0;
    *(long* volatile*)(a + 0x10) = 0;
    char* f = self + 0x48;
    *(volatile int*)(self + 0x40) = p2;
    *(long* volatile*)(f + 0x8) = 0;
    *(long* volatile*)(f + 0x28) = 0;
    *(volatile int*)(f + 0x8) = 0;
    *(long* volatile*)(f + 0x10) = 0;
    *(char** volatile*)(f + 0x18) = (char**)e;
    *(char** volatile*)(f + 0x20) = (char**)e;
    *(void* volatile*)&m_instance_793940 = self;
    *(long* volatile*)(self + 0x38) = 0;
}
} } }
// REVERSED_FUNCTION: test (0x793940)

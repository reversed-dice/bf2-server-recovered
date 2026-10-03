namespace dice { namespace hfe {
extern "C" void* g_adf60;
void eom_795ef0(char* self) {
    char* p0 = self + 0x8;
    char* p1 = self + 0x10;
    *(void* volatile*)self = (void*)0xba7360;
    *(long* volatile*)(p0 + 0x8) = 0;
    *(char** volatile*)(p0 + 0x18) = (char**)p1;
    *(volatile int*)(p0 + 0x8) = 0;
    *(char** volatile*)(p0 + 0x20) = (char**)p1;
    char* p2 = self + 0x48;
    *(long* volatile*)(p0 + 0x28) = 0;
    *(long* volatile*)(p0 + 0x10) = 0;
    char* p3 = self + 0x40;
    *(long* volatile*)(p3 + 0x8) = 0;
    *(long* volatile*)(p3 + 0x28) = 0;
    *(volatile int*)(p3 + 0x8) = 0;
    *(long* volatile*)(p3 + 0x10) = 0;
    *(char** volatile*)(p3 + 0x18) = (char**)p2;
    *(char** volatile*)(p3 + 0x20) = (char**)p2;
    *(void* volatile*)&g_adf60 = self;
    *(long* volatile*)(self + 0x38) = 0;
}
} }
// REVERSED_FUNCTION: test (0x795ef0)

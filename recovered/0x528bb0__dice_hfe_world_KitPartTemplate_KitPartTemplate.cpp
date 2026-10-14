// FUNCTION: BF2 0x528bb0
namespace dice { namespace hfe {
extern "C" void fn_5767f0(void* p);
void eom_528bb0(char* self) {
    fn_5767f0(self);
    char* a = self + 0x1f8;
    char* d = self + 0x200;
    *(void* volatile*)(self + 0x0) = (void*)0xb453d0;
    *(void* volatile*)(self + 0x10) = (void*)0xb45688;
    *(void* volatile*)(self + 0x68) = (void*)0xb456c0;
    *(void* volatile*)(self + 0x1c8) = (void*)0xb45740;
    *(void* volatile*)(a + 0x8) = (void*)0x0;
    *(void* volatile*)(a + 0x28) = (void*)0x0;
    *(volatile int*)(a + 0x8) = 0;
    *(void* volatile*)(a + 0x10) = (void*)0x0;
    *(void* volatile*)(a + 0x18) = (void*)d;
    *(void* volatile*)(a + 0x20) = (void*)d;
    *(volatile int*)(self + 0x228) = -1;
    *(volatile int*)(self + 0x22c) = 1;
}
} }

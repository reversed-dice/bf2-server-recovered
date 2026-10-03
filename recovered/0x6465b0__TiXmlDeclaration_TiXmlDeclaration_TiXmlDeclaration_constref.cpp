namespace dice { namespace hfe {
extern "C" void fn_646380(void* p, int v);
extern "C" void fn_645630(void* obj, void* self);
void eom_6465b0(char* self, void* obj) {
    fn_646380(self, 5);
    char* a = self + 0x58;
    *(void* volatile*)(self + 0x0) = (void*)0xb88390;
    *(void* volatile*)(self + 0x58) = (void*)0x0;
    *(void* volatile*)(self + 0x68) = (void*)0x0;
    *(void* volatile*)(self + 0x78) = (void*)0x0;
    *(volatile int*)(a + 0x8) = 0;
    *(volatile int*)(a + 0xc) = 0;
    a = self + 0x68;
    *(volatile int*)(a + 0x8) = 0;
    *(volatile int*)(a + 0xc) = 0;
    a = self + 0x78;
    *(volatile int*)(a + 0x8) = 0;
    *(volatile int*)(a + 0xc) = 0;
    fn_645630(obj, self);
}
} }
// REVERSED_FUNCTION: test (0x6465b0)

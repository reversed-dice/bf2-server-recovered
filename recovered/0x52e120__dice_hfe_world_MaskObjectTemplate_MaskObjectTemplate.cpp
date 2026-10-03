namespace dice { namespace hfe {
extern "C" void fn_5092e0(void* p);
void eom_52e120(char* self) {
    fn_5092e0(self);
    char* a = self + 0x21c;
    *(void* volatile*)(self + 0x0) = (void*)0xb477d0;
    *(void* volatile*)(self + 0x10) = (void*)0xb47a60;
    *(void* volatile*)(self + 0x68) = (void*)0xb47a98;
    *(void* volatile*)(self + 0x1c8) = (void*)0xb47b18;
    *(volatile int*)(self + 0x218) = 2;
    *(volatile int*)(self + 0x21c) = 0;
    *(volatile int*)(a + 0x4) = (int)0xbfc66666;
    *(volatile int*)(a + 0x8) = (int)0x3da3d70a;
}
} }
// REVERSED_FUNCTION: test (0x52e120)

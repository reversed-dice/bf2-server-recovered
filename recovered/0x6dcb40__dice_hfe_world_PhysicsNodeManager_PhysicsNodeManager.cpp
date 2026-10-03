namespace dice { namespace hfe { namespace world {
extern "C" void fn_6d66e0(void* p);
void eom_6dcb40(char* self) {
    fn_6d66e0(self);
    char* a = self + 0x10;
    *(void* volatile*)(self + 0x0) = (void*)0xb94330;
    *(volatile int*)(self + 0x8) = 1;
    *(void* volatile*)(self + 0x10) = (void*)a;
    *(void* volatile*)(a + 0x8) = (void*)a;
    *(volatile int*)(self + 0x20) = 0;
}
} } }
// REVERSED_FUNCTION: test (0x6dcb40)

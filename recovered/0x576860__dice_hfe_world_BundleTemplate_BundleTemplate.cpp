namespace dice { namespace hfe {
extern "C" void fn_58b960(void* p);
void eom_576860(char* self) {
    fn_58b960(self);
    char* a = self + 0x1d8;
    *(void* volatile*)(self + 0x0) = (void*)0xb56c30;
    *(void* volatile*)(self + 0x10) = (void*)0xb56ec0;
    *(void* volatile*)(self + 0x68) = (void*)0xb56ef8;
    *(void* volatile*)(self + 0x1c8) = (void*)0xb56f78;
    *(volatile int*)(self + 0x1d0) = 1;
    *(void* volatile*)(self + 0x1d8) = (void*)0x0;
    *(void* volatile*)(a + 0x8) = (void*)0x0;
    *(void* volatile*)(a + 0x10) = (void*)0x0;
    *(volatile char*)(self + 0x1f0) = 0;
    *(volatile char*)(self + 0x1f1) = 0;
}
} }
// REVERSED_FUNCTION: test (0x576860)

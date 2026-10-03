namespace dice { namespace hfe {
extern "C" void* fn_4d0d10(void* begin, void* begin2, void* end);
void eom_4d0860(char* self) {
    *(volatile int*)(self + 0x4) = 0;
    *(volatile char*)(self + 0x0) = 0;
    char* v = self + 0x48;
    fn_4d0d10(v, *(void**)(self + 0x48), *(void**)(v + 0x8));
    *(volatile char*)(self + 0x60) = 0;
}
} }
// REVERSED_FUNCTION: test (0x4d0860)

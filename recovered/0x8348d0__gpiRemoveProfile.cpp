// FUNCTION: BF2 0x8348d0
extern "C" void real_0x83b960(void* p);
extern "C" void gpiRemoveProfile(void* self) {
    void* a = *(void**)self;
    real_0x83b960(*(void**)((char*)a + 0x4b0));
}
// REVERSED_FUNCTION: gpiRemoveProfile (0x8348d0)

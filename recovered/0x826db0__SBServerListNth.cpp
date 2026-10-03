// FUNCTION: BF2 0x826db0
extern "C" void* real_0x83ad40(void* p);
extern "C" void* SBServerListNth(void* self) {
    void* p = *(void**)((char*)self+8);
    void* r = real_0x83ad40(p);
    return *(void**)r;
}
// REVERSED_FUNCTION: SBServerListNth (0x826db0)

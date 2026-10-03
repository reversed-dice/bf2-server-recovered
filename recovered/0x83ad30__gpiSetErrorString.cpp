// FUNCTION: BF2 0x83ad30
extern "C" void real_0x83a680(void* p, void* unused, int n);
extern "C" void gpiSetErrorString(void* self, void* unused) {
    real_0x83a680(*(void**)self, unused, 0x100);
}
// REVERSED_FUNCTION: gpiSetErrorString (0x83ad30)

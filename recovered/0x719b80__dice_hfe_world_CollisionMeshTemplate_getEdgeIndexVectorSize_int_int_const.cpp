// FUNCTION: BF2 0x719b80
void* fn_719810(void*) __attribute__((noinline));
void* fn_719810(void* a) { return 0; }
int fn_719b80(void* self) {
    void* h = fn_719810(self);
    return (*(long*)((char*)h + 0x130) - *(long*)((char*)h + 0x128)) >> 1;
}
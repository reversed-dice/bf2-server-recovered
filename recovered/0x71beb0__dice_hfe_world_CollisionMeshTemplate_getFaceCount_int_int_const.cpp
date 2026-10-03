// FUNCTION: BF2 0x71beb0
void* fn_719810(void*) __attribute__((noinline));
void* fn_719810(void* a) { return 0; }
int fn_71beb0(void* self) {
    void* h = fn_719810(self);
    return (*(long*)((char*)h + 0x8) - *(long*)((char*)h + 0x0)) >> 3;
}
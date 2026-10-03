// FUNCTION: BF2 0x68c580
unsigned char fn_68c4b0(void*, void*) __attribute__((noinline));
unsigned char fn_68c4b0(void* a, void* b) { return 0; }
unsigned char fn_68c580(void* self, void* arg) {
    if (*(long*)((char*)self + 0x10) != (long)arg) {
        return fn_68c4b0(self, arg);
    }
    return 0;
}
// FUNCTION: BF2 0x6016b0
extern "C" void fn_4085b8(void*);
void fn_6016b0(void* self) {
    void** v = (void**)((char*)self + 0x38);
    *(long* volatile*)self = (long*)0xb73770;
    *(long* volatile*)((char*)self + 8) = (long*)0xb737f8;
    char* begin = *(char* volatile*)((char*)self + 0x38);
    char* end = (char*)v[1];
    if (begin != end) {
        do { begin = begin + 4; } while (begin != end);
    }
    if (__builtin_expect(v[0] != 0, 1)) fn_4085b8(v[0]);
}
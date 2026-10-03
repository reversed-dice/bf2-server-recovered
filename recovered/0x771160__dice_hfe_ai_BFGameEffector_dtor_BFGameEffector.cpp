// FUNCTION: BF2 0x771160
extern "C" void fn_77d8d0(void*);
void fn_771160(void* self) {
    void** v = (void**)((char*)self + 0x8);
    *(long* volatile*)self = (long*)0xba19f0;
    char* begin = *(char* volatile*)((char*)self + 0x8);
    char* end = (char*)v[1];
    if (begin != end) {
        do { begin = begin + 0x14; } while (begin != end);
    }
    if (__builtin_expect(v[0] != 0, 1)) fn_77d8d0(v[0]);
    fn_77d8d0(self);
}
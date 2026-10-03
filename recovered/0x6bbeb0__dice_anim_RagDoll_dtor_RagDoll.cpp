// FUNCTION: BF2 0x6bbeb0
extern "C" void fn_4085b8(void*);
extern "C" void fn_6bb160(void*, void*);
void fn_6bbeb0(void* self) {
    fn_6bb160(*(void**)((char*)self + 0x20), self);
    void** v = (void**)((char*)self + 0x8);
    char* begin = (char*)v[0];
    char* end = (char*)v[1];
    if (begin != end) {
        do { begin = begin + 0x58; } while (begin != end);
    }
    if (__builtin_expect(v[0] != 0, 1)) fn_4085b8(v[0]);
}
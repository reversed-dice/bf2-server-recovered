// FUNCTION: BF2 0x805610
extern void fn_407ee8(void*, void*, int, void*) __attribute__((noreturn));
extern void fn_83b7a0(void*);
extern void fn_83ae70(void*);
void ciCleanupChannels_0x805610(void* self) {
    if (!self)
        fn_407ee8((void*)0xbb03a4, (void*)0xbb0930, 0x127, (void*)0xbb0520);
    void* c = *(void**)((char*)self + 0x868);
    if (c)
        fn_83b7a0(c);
    void* d = *(void**)((char*)self + 0x870);
    if (d)
        return fn_83ae70(d);
}

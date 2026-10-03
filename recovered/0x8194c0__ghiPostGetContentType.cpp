// FUNCTION: BF2 0x8194c0
extern void fn_407ee8(void*, void*, int, void*) __attribute__((noreturn));
const char* ghiPostGetContentType_0x8194c0(void* self) {
    void* p = *(void**)((char*)self + 0x1d0);
    if (!p)
        fn_407ee8((void*)0xbb3b78, (void*)0xbb3758, 0x195, (void*)0xbb35d0);
    const char* r = (const char*)0xbb37c8;
    if (*(int*)((char*)p + 0x18) == 0)
        r = (const char*)0xbb3810;
    return r;
}

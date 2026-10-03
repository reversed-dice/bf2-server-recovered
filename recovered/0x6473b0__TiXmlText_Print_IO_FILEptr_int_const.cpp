// FUNCTION: BF2 0x6473b0
namespace dice { namespace hfe {
extern void fn_647100(void* a, void* b);
extern void fn_4080e8(const char* a, void* b);
extern void fn_408198(void* a);
void Print_0x6473b0(void* self, void* file, int a) {
    char buf[0x10];
    *(int*)(buf + 8) = 0;
    *(long long*)buf = 0;
    *(int*)(buf + 0xc) = 0;
    fn_647100((char*)self + 0x38, buf);
    const char* s = *(int*)(buf + 8) ? *(const char**)buf : (const char*)0xbb25f1;
    fn_4080e8(s, file);
    void* p = *(void**)buf;
    if (p)
        fn_408198(p);
}
} }

// FUNCTION: BF2 0x68cf90
namespace dice { namespace hfe {
extern void* fn_0x00487090(void* self, int* v);
void* get_68cf90(void* self, int v) {
    void* end = fn_0x00487090((char*)self + 0x158, &v);
    void* r = 0;
    if ((char*)self + 0x160 != end)
        r = *(void**)((char*)end + 0x28);
    return r;
}
} }

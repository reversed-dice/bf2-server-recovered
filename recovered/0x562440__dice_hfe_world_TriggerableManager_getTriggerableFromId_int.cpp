// FUNCTION: BF2 0x562440
namespace dice { namespace hfe {
extern void* fn_0x566b90(void* self, int* v);
void* get_0x562440(void* self, int v) {
    void* end = fn_0x566b90((char*)self + 0x48, &v);
    void* r = 0;
    if ((char*)self + 0x50 != end)
        r = *(void**)((char*)end + 0x28);
    return r;
}
} }

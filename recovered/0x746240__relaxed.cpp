// FUNCTION: BF2 0x746240
namespace dice { namespace hfe {
extern void* fn_4c95c0(void* a, void* b);
void* get_0x745440(void* self, void* arg2, void* arg3) {
    void* p = fn_4c95c0(self, arg2);
    *(void**)((char*)self + 0x30) = p;
    if (p != (char*)self + 8)
        return (char*)p + 0x28;
    return arg3;
}
} }

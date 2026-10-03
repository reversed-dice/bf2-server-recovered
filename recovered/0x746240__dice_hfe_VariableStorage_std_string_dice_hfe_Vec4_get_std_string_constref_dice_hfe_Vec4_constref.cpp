// FUNCTION: BF2 0x746240
namespace dice { namespace hfe {
extern void* fn_00746100(void* a, void* b);
void* get_0x746240(void* self, void* arg2, void* arg3) {
    void* p = fn_00746100(self, arg2);
    *(void**)((char*)self + 0x30) = p;
    if (p != (char*)self + 8)
        return (char*)p + 0x28;
    return arg3;
}
} }

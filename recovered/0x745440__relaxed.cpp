// FUNCTION: BF2 0x745440
namespace dice { namespace hfe {
extern void* fn_745520(void* a, void* b);
void* get_0x745660(void* self, void* arg2, void* arg3) {
    void* p = fn_745520(self, arg2);
    *(void**)((char*)self + 0x30) = p;
    if (p != (char*)self + 8)
        return (char*)p + 0x28;
    return arg3;
}
} }

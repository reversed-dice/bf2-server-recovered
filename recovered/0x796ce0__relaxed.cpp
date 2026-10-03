// FUNCTION: BF2 0x796ce0
namespace dice { namespace hfe {
extern void* fn_0x00797010(void* self);
void get_793750(void* self) {
    void* end = fn_0x00797010((char*)self + 0x8);
    if ((char*)self + 0x10 != end)
        *(void**)((char*)self + 0x38) = *(void**)((char*)end + 0x28);
    else
        *(void**)((char*)self + 0x38) = 0;
}
} }

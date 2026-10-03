// FUNCTION: BF2 0x6b0610
namespace dice { namespace hfe {
extern void* fn_0x006b10b0(void* self);
void get_6b0610(void* self) {
    void* end = fn_0x006b10b0((char*)self + 0x8);
    if ((char*)self + 0x10 != end)
        *(void**)((char*)self + 0x38) = *(void**)((char*)end + 0x30);
}
} }

// FUNCTION: BF2 0x793750
namespace dice { namespace hfe {
extern void* fn_0x00793be0(void* self);
void get_795370(void* self) {
    void* end = fn_0x00793be0((char*)self + 0x8);
    if ((char*)self + 0x10 != end)
        *(void**)((char*)self + 0x38) = *(void**)((char*)end + 0x28);
    else
        *(void**)((char*)self + 0x38) = 0;
}
} }

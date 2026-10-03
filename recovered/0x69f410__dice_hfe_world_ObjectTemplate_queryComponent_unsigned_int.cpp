// FUNCTION: BF2 0x69f410
namespace dice { namespace hfe {
extern void* fn_0x006a0690(void* self, int* v);
void* get_69f410(void* self, int v) {
    void* end = fn_0x006a0690((char*)self + 0x30, &v);
    void* r = 0;
    if ((char*)self + 0x38 != end)
        r = *(void**)((char*)end + 0x28);
    return r;
}
} }

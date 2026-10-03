// FUNCTION: BF2 0x797be0
namespace dice { namespace hfe {
void* get_797be0(void* self) {
    void* node = *(void**)((char*)self + 0x38);
    void* end = (char*)self + 0x10;
    void* r = 0;
    if (node != end)
        r = *(void**)((char*)node + 0x28);
    return r;
}
} }

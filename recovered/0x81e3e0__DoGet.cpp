// FUNCTION: BF2 0x81e3e0
namespace dice { namespace hfe {
void* DoGet_0x81e3e0(void* self) {
    void* r = 0;
    if (self) {
        if (*(int*)((char*)self + 0x8) == 0x2)
            r = *(void**)((char*)self + 0x10);
        else
            r = (char*)self + 0x10;
    }
    return r;
}
} }

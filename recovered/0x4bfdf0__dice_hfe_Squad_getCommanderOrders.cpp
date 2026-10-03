// FUNCTION: BF2 0x4bfdf0
namespace dice { namespace hfe {
void* f_4bfdf0(void* self) {
    void* r = 0;
    if (*(char*)((char*)self + 0x1a))
        r = (char*)self + 0x110;
    return r;
}
} }

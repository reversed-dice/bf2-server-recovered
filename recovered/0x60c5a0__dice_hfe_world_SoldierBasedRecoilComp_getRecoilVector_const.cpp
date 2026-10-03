// FUNCTION: BF2 0x60c5a0
namespace dice { namespace hfe {
void* f_60c5a0(void* self) {
    char* p = *(char**)((char*)self + 0xc0);
    void* r = p + 0x78;
    if (!*(char*)(p + 0x49))
        r = p + 0x60;
    return r;
}
} }

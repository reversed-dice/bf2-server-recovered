// FUNCTION: BF2 0x5839a0
namespace dice { namespace hfe {
float f_5839a0(void* self) {
    char* p = *(char**)((char*)self + 0x28);
    char* r = (char*)0xb5b3d4;
    if (p)
        r = p + 0x1f8;
    return *(float*)r;
}
} }

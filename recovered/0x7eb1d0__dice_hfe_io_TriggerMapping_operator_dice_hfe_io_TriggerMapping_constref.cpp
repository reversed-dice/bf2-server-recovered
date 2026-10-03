// FUNCTION: BF2 0x7eb1d0
namespace dice { namespace hfe { namespace io {
char* eom_7eb1d0(char* dst, char* src) {
    *(int*)(dst + 0x0) = *(int*)(src + 0x0);
    *(int*)(dst + 0x4) = *(int*)(src + 0x4);
    *(int*)(dst + 0x8) = *(int*)(src + 0x8);
    *(int*)(dst + 0xc) = *(int*)(src + 0xc);
    *(int*)(dst + 0x10) = *(int*)(src + 0x10);
    *(int*)(dst + 0x14) = *(int*)(src + 0x14);
    *(char*)(dst + 0x18) = *(char*)(src + 0x18);
    *(void**)(dst + 0x20) = *(void**)(src + 0x20);
    *(int*)(dst + 0x28) = *(int*)(src + 0x28);
    return dst;
}
} } }
// REVERSED_FUNCTION: test (0x7eb1d0)

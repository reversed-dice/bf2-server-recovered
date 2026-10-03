// FUNCTION: BF2 0x7eb0d0
namespace dice { namespace hfe { namespace io {
char* eom_7eb0d0(char* dst, char* src) {
    *(int*)(dst + 0x0) = *(int*)(src + 0x0);
    *(int*)(dst + 0x4) = *(int*)(src + 0x4);
    *(int*)(dst + 0x8) = *(int*)(src + 0x8);
    *(int*)(dst + 0xc) = *(int*)(src + 0xc);
    *(int*)(dst + 0x10) = *(int*)(src + 0x10);
    *(int*)(dst + 0x14) = *(int*)(src + 0x14);
    *(int*)(dst + 0x18) = *(int*)(src + 0x18);
    *(int*)(dst + 0x1c) = *(int*)(src + 0x1c);
    *(int*)(dst + 0x20) = *(int*)(src + 0x20);
    *(char*)(dst + 0x24) = *(char*)(src + 0x24);
    *(int*)(dst + 0x28) = *(int*)(src + 0x28);
    *(int*)(dst + 0x2c) = *(int*)(src + 0x2c);
    *(int*)(dst + 0x30) = *(int*)(src + 0x30);
    *(int*)(dst + 0x34) = *(int*)(src + 0x34);
    *(int*)(dst + 0x38) = *(int*)(src + 0x38);
    *(int*)(dst + 0x3c) = *(int*)(src + 0x3c);
    *(int*)(dst + 0x40) = *(int*)(src + 0x40);
    *(void**)(dst + 0x48) = *(void**)(src + 0x48);
    *(char*)(dst + 0x50) = *(char*)(src + 0x50);
    return dst;
}
} } }
// REVERSED_FUNCTION: test (0x7eb0d0)

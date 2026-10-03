// FUNCTION: BF2 0x83bd50
namespace dice { namespace hfe {
void set_83bd50(void* self) {
    *(int*)((char*)self + 0x14) = (int)0x0;
    *(int*)((char*)self + 0x10) = (int)0x0;
    *(int*)self = (int)0x67452301;
    *(int*)((char*)self + 0x4) = (int)0xefcdab89;
    *(int*)((char*)self + 0x8) = (int)0x98badcfe;
    *(int*)((char*)self + 0xc) = (int)0x10325476;
}
} }

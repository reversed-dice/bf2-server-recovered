// FUNCTION: BF2 0x4391c0
namespace dice { namespace hfe {
void* f_465320(void* self) {
    *(int*)((char*)self + 0x18) = (*(int*)((char*)self + 0x18) & 0xfffffefb) | 0x4;
    return self;
}
} }

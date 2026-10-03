// FUNCTION: BF2 0x465320
namespace dice { namespace hfe {
void* f_4391c0(void* self) {
    *(int*)((char*)self + 0x18) = (*(int*)((char*)self + 0x18) & 0xffffffb5) | 0x8;
    return self;
}
} }

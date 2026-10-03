// FUNCTION: BF2 0x8194b0
namespace dice { namespace hfe {
void f_8194b0(void* self, void* a, void* b) {
    *(void**)((char*)self + 0x8) = a;
    *(void**)((char*)self + 0x10) = b;
}
} }

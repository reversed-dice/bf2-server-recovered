// FUNCTION: BF2 0x68c4a0
namespace dice { namespace hfe {
void f_68c4a0(void* self, int a, int b) {
    *(void**)((char*)self + 0x0) = (void*)0xb8e0f0;
    *(int*)((char*)self + 0x8) = a;
    *(int*)((char*)self + 0xc) = b;
}
} }

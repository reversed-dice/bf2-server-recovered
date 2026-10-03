// FUNCTION: BF2 0x78b8e0
namespace dice { namespace hfe {
extern void fn_0x4083d8(void* p, int a);
void f_0x78b8e0(void* self) {
    *(char*)((char*)self + 0x8) = 0;
    *(void**)((char*)self + 0x10) = 0;
    fn_0x4083d8(*(void**)((char*)self + 0x18), 0);
}
} }

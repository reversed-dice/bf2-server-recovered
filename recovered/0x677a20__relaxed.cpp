// FUNCTION: BF2 0x677a20
namespace dice { namespace hfe {
extern void fn_0x0064b500(void* p);
extern void fn_0x0064ce80(void* p);
void ctor_655ba0(void* self) {
    *(void**)self = (void*)0xb8baf0;
    fn_0x0064b500((char*)self + 0x8);
    *(void**)self = (void*)0xb8baf0;
    *(void**)self = (void*)0xb8ba10;
    *(void**)((char*)self + 0x8) = (void*)0xb8ba88;
    *(int*)((char*)self + 0x28) = 0x1;
    fn_0x0064ce80((char*)self + 0x30);
}
} }

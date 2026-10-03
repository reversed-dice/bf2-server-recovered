// FUNCTION: BF2 0x573e90
namespace dice { namespace hfe { namespace world {
extern void fn_58a480(void* a);
extern void* fn_731400();
void ctor_0x573e90(void* self) {
    fn_58a480(self);
    *(void**)self = (void*)0xb567d0;
    *(void**)((char*)self + 0x100) = (void*)0xb56ae0;
    *(void**)((char*)self + 0x230) = fn_731400();
}
} } }

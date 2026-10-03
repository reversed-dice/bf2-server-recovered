// FUNCTION: BF2 0x7f9c90
namespace dice { namespace hfe { namespace io {
extern void fn_4085b8(void* a);
void dtor_0x7f9c90(void* self) {
    *(void**)self = (void*)0xbaf630;
    fn_4085b8(*(void**)((char*)self + 0x58));
    fn_4085b8(*(void**)((char*)self + 0x60));
    fn_4085b8(*(void**)((char*)self + 0x10));
    fn_4085b8(*(void**)((char*)self + 0x18));
    fn_4085b8(self);
}
} } }

// FUNCTION: BF2 0x700c60
namespace dice { namespace hfe { namespace world {
extern void base_0x006ff540(void* self);
extern void del_0x006d6520(void* self);
void dtor_50ccc0(void* self) {
    *(void**)self = (void*)0xb96690;
    *(void**)((char*)self + 0x8) = (void*)0xb96810;
    base_0x006ff540(self);
    del_0x006d6520(self);
}
} } }

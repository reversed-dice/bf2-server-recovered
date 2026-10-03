// FUNCTION: BF2 0x701980
namespace dice { namespace hfe { namespace world {
extern void sub_0x00700c30(void* self);
extern void del_0x006d6550(void* self);
void dtor_701980(void* self) {
    *(void**)self = (void*)0xb968f0;
    *(void**)((char*)self + 0x8) = (void*)0xb96a00;
    *(void**)((char*)self + 0x10) = (void*)0xb96b80;
    sub_0x00700c30((char*)self + 0x8);
    del_0x006d6550(self);
}
} } }

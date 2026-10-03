// FUNCTION: BF2 0x64da90
namespace dice { namespace hfe { namespace world {
extern void sub_0x0064c5b0(void* self);
extern void sub_0x0064b580(void* self);
void dtor_64da90(void* self) {
    *(void**)self = (void*)0xb89cb0;
    *(void**)((char*)self + 0x8) = (void*)0xb89d30;
    sub_0x0064c5b0((char*)self + 0x30);
    sub_0x0064b580((char*)self + 0x8);
}
} } }

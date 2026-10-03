// FUNCTION: BF2 0x847e50
namespace dice { namespace hfe { namespace world {
extern void sub_0x00847780(void* self);
extern void sub_0x008455f0(void* self);
void dtor_847e50(void* self) {
    *(void**)self = (void*)0xbb84b0;
    sub_0x00847780((char*)self + 0x810);
    sub_0x008455f0((char*)self + 0x848);
    *(char*)((char*)self + 0x8) = (char)0x0;
}
} } }

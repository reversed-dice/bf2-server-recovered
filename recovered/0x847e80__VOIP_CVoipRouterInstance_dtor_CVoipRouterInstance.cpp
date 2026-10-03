// FUNCTION: BF2 0x847e80
namespace dice { namespace hfe { namespace world {
extern void sub_0x008455b0(void* self);
extern void sub_0x00847740(void* self);
void dtor_847e80(void* self) {
    *(void**)self = (void*)0xbb84b0;
    sub_0x008455b0((char*)self + 0x848);
    sub_0x00847740((char*)self + 0x810);
}
} } }

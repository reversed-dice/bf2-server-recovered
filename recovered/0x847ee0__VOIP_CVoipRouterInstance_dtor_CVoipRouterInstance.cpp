// FUNCTION: BF2 0x847ee0
namespace dice { namespace hfe { namespace world {
extern void sub_0x008455b0(void* self);
extern void sub_0x00847740(void* self);
extern void del_0x004085b8(void* self);
void dtor_847ee0(void* self) {
    *(void**)self = (void*)0xbb84b0;
    sub_0x008455b0((char*)self + 0x848);
    sub_0x00847740((char*)self + 0x810);
    del_0x004085b8(self);
}
} } }

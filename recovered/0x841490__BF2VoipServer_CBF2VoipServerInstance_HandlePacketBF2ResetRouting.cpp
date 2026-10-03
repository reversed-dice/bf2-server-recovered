// FUNCTION: BF2 0x841490
namespace dice { namespace hfe { namespace pb {
extern void fn_407f68(void* a, int b, int c);
int fn_0x841490(void* self) {
    int t = ((int (*)(void*))(*(void***)self)[0xa])(self);
    fn_407f68((char*)self + 0xaac, 0, 0x104);
    return t;
}
} } }

// FUNCTION: BF2 0xa82ba0
namespace dice { namespace hfe {
extern void del_0x004085b8(void* self);
int release_a82ba0(void* self) {
    int r = --*(int*)((char*)self + 0x10);
    if (r == 0) del_0x004085b8(self);
    return r;
}
} }

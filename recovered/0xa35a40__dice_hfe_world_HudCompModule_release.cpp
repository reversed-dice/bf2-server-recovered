// FUNCTION: BF2 0xa35a40
namespace dice { namespace hfe {
extern void del_0x004085b8(void* self);
int release_a35a40(void* self) {
    int r = --*(int*)((char*)self + 0x8);
    if (r == 0) del_0x004085b8(self);
    return r;
}
} }

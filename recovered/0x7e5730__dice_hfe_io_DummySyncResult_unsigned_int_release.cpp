// FUNCTION: BF2 0x7e5730
namespace dice { namespace hfe {
extern void del_0x004085b8(void* self);
int release_7e5730(void* self) {
    int r = --*(int*)((char*)self + 0x8);
    if (r == 0) del_0x004085b8(self);
    return r;
}
} }

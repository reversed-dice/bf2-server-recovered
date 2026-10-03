// FUNCTION: BF2 0x60b080
namespace dice { namespace hfe {
extern void del_0x004085b8(void* self);
int release_60b080(void* self) {
    int r = --*(int*)((char*)self + 0x14);
    if (r == 0) del_0x004085b8(self);
    return r;
}
} }

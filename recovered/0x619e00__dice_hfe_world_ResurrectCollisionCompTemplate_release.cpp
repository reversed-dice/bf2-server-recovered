// FUNCTION: BF2 0x619e00
namespace dice { namespace hfe {
extern void del_0x004085b8(void* self);
int release_619e00(void* self) {
    int r = --*(int*)((char*)self + 0x10);
    if (r == 0) del_0x004085b8(self);
    return r;
}
} }

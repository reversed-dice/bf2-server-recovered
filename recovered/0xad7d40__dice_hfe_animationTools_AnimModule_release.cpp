// FUNCTION: BF2 0xad7d40
namespace dice { namespace hfe {
extern void del_0x004085b8(void* self);
int release_ad7d40(void* self) {
    int r = --*(int*)((char*)self + 0x10);
    if (r == 0) del_0x004085b8(self);
    return r;
}
} }

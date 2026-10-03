// FUNCTION: BF2 0x60b960
namespace dice { namespace hfe {
extern void del_0x004085b8(void* self);
int release_60b960(void* self) {
    int r = --*(int*)((char*)self + 0x14);
    if (r == 0) del_0x004085b8(self);
    return r;
}
} }

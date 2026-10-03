// FUNCTION: BF2 0x62ba20
namespace dice { namespace hfe {
extern void del_0x004085b8(void* self);
int release_62ba20(void* self) {
    int r = --*(int*)((char*)self + 0x18);
    if (r == 0) del_0x004085b8(self);
    return r;
}
} }

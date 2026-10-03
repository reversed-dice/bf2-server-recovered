// FUNCTION: BF2 0x627930
namespace dice { namespace hfe {
extern void del_0x004085b8(void* self);
int release_627930(void* self) {
    int r = --*(int*)((char*)self + 0x10);
    if (r == 0) del_0x004085b8(self);
    return r;
}
} }

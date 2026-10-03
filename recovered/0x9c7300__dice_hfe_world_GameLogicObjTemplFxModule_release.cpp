// FUNCTION: BF2 0x9c7300
namespace dice { namespace hfe {
extern void del_0x004085b8(void* self);
int release_9c7300(void* self) {
    int r = --*(int*)((char*)self + 0x8);
    if (r == 0) del_0x004085b8(self);
    return r;
}
} }

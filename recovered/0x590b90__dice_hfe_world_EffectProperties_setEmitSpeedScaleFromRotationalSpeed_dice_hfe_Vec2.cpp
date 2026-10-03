// FUNCTION: BF2 0x590b90
namespace dice { namespace hfe { namespace world {
void eom_590b90(char* self, int* src) {
    void (*fn)(void*, int, int, int*) = *(void(**)(void*, int, int, int*))(*(char**)self + 0x350);
    int y = src[1];
    int x = src[0];
    int v[2];
    v[0] = x;
    v[1] = y;
    fn(self, 2, 1, v);
}
} } }
// REVERSED_FUNCTION: test (0x590b90)

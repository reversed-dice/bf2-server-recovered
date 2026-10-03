// FUNCTION: BF2 0x590aa0
namespace dice { namespace hfe { namespace world {
void eom_590aa0(char* self, int* src) {
    void (*fn)(void*, int, int, int*) = *(void(**)(void*, int, int, int*))(*(char**)self + 0x350);
    int y = src[1];
    int x = src[0];
    int v[2];
    v[0] = x;
    v[1] = y;
    fn(self, 1, 3, v);
}
} } }
// REVERSED_FUNCTION: test (0x590aa0)

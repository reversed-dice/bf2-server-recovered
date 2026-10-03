// FUNCTION: BF2 0x590f50
namespace dice { namespace hfe { namespace world {
void eom_590f50(char* self, int* src) {
    void (*fn)(void*, int, int, int*) = *(void(**)(void*, int, int, int*))(*(char**)self + 0x350);
    int y = src[1];
    int x = src[0];
    int v[2];
    v[0] = x;
    v[1] = y;
    fn(self, 5, 0, v);
}
} } }
// REVERSED_FUNCTION: test (0x590f50)

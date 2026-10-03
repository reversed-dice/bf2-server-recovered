// FUNCTION: BF2 0x67f4d0
namespace dice { namespace hfe { namespace world {
int getNrOfActiveSquads_0x67f4d0(void* self, int v) {
    int n = 0;
    for (int i = 1; i < 0xa; i++) {
        int r = ((int (*)(void*, int, int))(*(void***)self)[0x27])(self, v, i);
        n += r > 0;
    }
    return n;
}
} } }

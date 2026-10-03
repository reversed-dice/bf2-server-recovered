// FUNCTION: BF2 0x832dc0
namespace dice {
void* cb_832dc0(void* self, int id) {
    void* n = *(void**)((char*)*(void**)((char*)self + 0x0) + 0x4c0);
    while (n != 0) {
        if (*(int*)((char*)n + 0xc) == id && *(int*)((char*)n + 0x0) == 0x69)
            return n;
        n = *(void**)((char*)n + 0x58);
    }
    return 0;
}
}
// REVERSED_FUNCTION: gpiGetConnectedPeer (0x832dc0)

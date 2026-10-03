// FUNCTION: BF2 0x849a70
extern "C" void* real_0x8499e0(int a, int b, int d, void* c);
extern "C" void* PbServerTrapConsole(void* c, int d) {
    return real_0x8499e0(0xe, -1, d, c);
}
// REVERSED_FUNCTION: PbServerTrapConsole (0x849a70)

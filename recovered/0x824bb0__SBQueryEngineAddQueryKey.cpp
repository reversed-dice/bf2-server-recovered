// FUNCTION: BF2 0x824bb0
namespace dice {
void cb_824bb0(void* self, char val) {
    int n = *(int*)((char*)self + 0x58);
    if (n <= 0x13) {
        *(char*)((char*)self + 0x44 + n) = val;
        *(int*)((char*)self + 0x58) = n + 1;
    }
}
}
// REVERSED_FUNCTION: SBQueryEngineAddQueryKey (0x824bb0)

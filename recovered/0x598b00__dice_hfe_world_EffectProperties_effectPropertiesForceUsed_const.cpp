// FUNCTION: BF2 0x598b00
namespace dice { namespace hfe { namespace world {
bool eom_598b00(char* self) {
    for (int i = 0; i < 6; i++) {
        if (*(char*)(self + 0x158) != 0) {
            return true;
        }
        self++;
    }
    return false;
}
} } }
// REVERSED_FUNCTION: test (0x598b00)

// FUNCTION: BF2 0x6f9250
namespace dice { namespace hfe { namespace world {
void eom_6f9250(char* self, int a, int b) {
    *(int*)(self + 0x28) = a;
    *(int*)(self + 0x2c) = b;
    *(int*)(self + 0x34) = a / 2;
    *(int*)(self + 0x38) = b / 2;
}
} } }
// REVERSED_FUNCTION: test (0x6f9250)

// FUNCTION: BF2 0x5f9aa0
namespace dice { namespace hfe { namespace world {
int* eom_5f9aa0(int* self, char* src) {
    int* v = (int*)(src + 0x184);
    int c = v[2];
    int b = v[1];
    int a = v[0];
    self[0] = a;
    self[1] = b;
    self[2] = c;
    return self;
}
} } }
// REVERSED_FUNCTION: test (0x5f9aa0)

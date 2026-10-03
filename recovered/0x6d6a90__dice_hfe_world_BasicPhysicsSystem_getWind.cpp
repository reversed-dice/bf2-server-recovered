// FUNCTION: BF2 0x6d6a90
namespace dice { namespace hfe { namespace world {
int* eom_6d6a90(int* self, char* src) {
    int* v = (int*)(src + 0x1c);
    int c = v[2];
    int b = v[1];
    int a = v[0];
    self[0] = a;
    self[1] = b;
    self[2] = c;
    return self;
}
} } }
// REVERSED_FUNCTION: test (0x6d6a90)

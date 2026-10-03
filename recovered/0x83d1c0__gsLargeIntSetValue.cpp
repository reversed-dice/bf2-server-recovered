// FUNCTION: BF2 0x83d1c0
namespace dice { namespace hfe {
int gsLargeIntSetValue_0x83d1c0(int* self, int x) {
    self[0] = 1;
    *(int*)((char*)self + 4) = x;
    return 1;
}
} }

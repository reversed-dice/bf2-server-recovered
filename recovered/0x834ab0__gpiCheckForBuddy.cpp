// FUNCTION: BF2 0x834ab0
namespace dice {
int cb_834ab0(void* unused, void* self, void* out) {
    int* p = *(int**)((char*)self + 0x8);
    if (p != 0 && *(int*)((char*)out + 0x0) == *p) {
        *(void**)((char*)out + 0x8) = self;
        return 0;
    }
    return 1;
}
}
// REVERSED_FUNCTION: gpiCheckForBuddy (0x834ab0)

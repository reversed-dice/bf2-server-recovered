// FUNCTION: BF2 0x74c7f0
namespace dice {
long cb_74c7f0(void* self) {
    if (self == 0)
        return -102;
    void* q = *(void**)((char*)self + 0x120);
    if (q == 0)
        return -102;
    return *(long*)((char*)q + 0x30);
}
}
// REVERSED_FUNCTION: unztell (0x74c7f0)

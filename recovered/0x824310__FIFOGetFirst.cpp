// FUNCTION: BF2 0x824310
namespace dice {
void* cb_824310(void* self) {
    void* first = *(void**)((char*)self + 0x0);
    if (first == 0)
        return 0;
    void* next = *(void**)((char*)first + 0x28);
    *(void**)((char*)self + 0x0) = next;
    if (next == 0)
        *(void**)((char*)self + 0x8) = 0;
    (*(int*)((char*)self + 0x10))--;
    return first;
}
}
// REVERSED_FUNCTION: FIFOGetFirst (0x824310)

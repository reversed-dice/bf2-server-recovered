// FUNCTION: BF2 0x8242e0
namespace dice {
void cb_8242e0(void* self, void* newnode) {
    void* last = *(void**)((char*)self + 0x8);
    if (last != 0)
        *(void**)((char*)last + 0x28) = newnode;
    *(void**)((char*)self + 0x8) = newnode;
    *(void**)((char*)newnode + 0x28) = 0;
    if (*(void**)((char*)self + 0x0) == 0)
        *(void**)((char*)self + 0x0) = newnode;
    (*(int*)((char*)self + 0x10))++;
}
}
// REVERSED_FUNCTION: FIFOAddRear (0x8242e0)

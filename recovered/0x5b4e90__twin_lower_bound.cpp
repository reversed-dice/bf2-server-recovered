// FUNCTION: BF2 0x5b4e90
extern "C" void* fn_5b4e90(void* self, int* key)
{
    void* node = *(void**)((char*)self + 0x10);
    void* result = (char*)self + 8;
    while (node) {
        if (*(int*)((char*)node + 0x20) >= *key) {
            result = node;
            node = *(void**)((char*)node + 0x10);
        } else {
            node = *(void**)((char*)node + 0x18);
        }
    }
    return result;
}

// FUNCTION: BF2 0x465620
extern "C" void* fn_465620(void* self, unsigned char* key)
{
    void* node = *(void**)((char*)self + 0x10);
    void* result = (char*)self + 8;
    while (node) {
        if (*(unsigned char*)((char*)node + 0x20) >= *key) {
            result = node;
            node = *(void**)((char*)node + 0x10);
        } else {
            node = *(void**)((char*)node + 0x18);
        }
    }
    return result;
}

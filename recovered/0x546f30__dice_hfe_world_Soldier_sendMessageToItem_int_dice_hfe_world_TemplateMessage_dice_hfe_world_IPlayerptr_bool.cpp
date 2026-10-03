// FUNCTION: BF2 0x546f30
typedef void* (*vfn1)(void*);
typedef void (*vfn2)(void*, unsigned int, void*, unsigned char);

extern "C" void sendMessageToItem_546f30(void* self, int param2, unsigned int param3, void* param4, unsigned char param5)
{
    void* r = ((vfn1)(*(void***)self)[0x4b8/8])(self);
    if (r && (*(unsigned char*)((char*)r + 8) & 1) == 0) {
        ((vfn2)(*(void***)r)[0x208/8])(r, param3, param4, param5);
    }
}

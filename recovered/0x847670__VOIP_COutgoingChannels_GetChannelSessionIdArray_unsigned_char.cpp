// FUNCTION: BF2 0x847670
extern "C" void* find_847b30(void* tree, void* key);

extern "C" long GetChannelSessionIdArray_847670(void* self, unsigned char param2)
{
    unsigned char local[4];
    local[0] = param2;
    void* lVar1 = find_847b30((char*)self + 8, local);
    if ((char*)self + 0x10 != lVar1) {
        return (long)lVar1 + 0x28;
    }
    return 0;
}

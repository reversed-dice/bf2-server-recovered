// FUNCTION: BF2 0x60a810
extern "C" void fn_60a810(void* self, unsigned char arg)
{
    void* obj = *(void**)((char*)self + 0x28);
    if (!obj)
        return;
    if (!*(char*)((char*)*(void**)((char*)self + 0x40) + 0x24))
        return;
    if (arg)
        return;
    void** vt = *(void***)obj;
    ((void (*)(void*, int))vt[0xe])(obj, 1);
}

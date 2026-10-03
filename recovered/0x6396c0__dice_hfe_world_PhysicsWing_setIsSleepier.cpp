// FUNCTION: BF2 0x6396c0
extern "C" void fn_6396c0(void* self, unsigned char arg)
{
    void* g = *(void**)0x1092940;
    if (*(int*)g == 1)
        return;
    int v = *(int*)((char*)self + 0x74);
    if (v > 1) {
        *(int*)((char*)self + 0x74) = v - 1;
        return;
    }
    if (v == 1) {
        *(int*)((char*)self + 0x74) = 0;
        void* obj = *(void**)((char*)self + 0x18);
        void** vt = *(void***)obj;
        ((void (*)(void*, int, int))vt[0x18])(obj, 0, 0x800);
    }
}

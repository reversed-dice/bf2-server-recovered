// FUNCTION: BF2 0xadcf50
extern "C" void* g_010936a0;
extern "C" int target_adcf50(void* self)
{
    if (*(int*)((char*)self + 0x30) == 2) {
        void* p = *(void**)((char*)self + 0x38);
        int idx = *(int*)p;
        void* q = *(void**)((char*)self + 0x40);
        int val = *(int*)q;
        *(char*)((char*)self + 0x108) = 0;
        int* g = *(int**)((char*)g_010936a0 + 0x78);
        g[idx] = val;
    }
    return 0;
}

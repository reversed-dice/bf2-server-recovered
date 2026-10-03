extern "C" void* g_gameLogic;
typedef int (*vfn0)(void*);

extern "C" float getPercentOfDropVehicles_473b90(void* self, int idx)
{
    int total = ((vfn0)(*(void***)g_gameLogic)[0xb0/8])(g_gameLogic);
    float f = *(int*)((char*)self + (long)idx * 0x38 + 4);
    return ((float)total - f) / (float)total;
}

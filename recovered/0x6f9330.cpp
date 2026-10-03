typedef float (*vfn1)(void*, float, float, float, float);

extern "C" float getMinMaxHeightInWorldCoords_6f9330(void* self, float a, float b, float c, float d)
{
    return ((vfn1)(*(void***)self)[0x1a0/8])(self,
        a - (float)*(int*)((char*)self + 0x20),
        b - (float)*(int*)((char*)self + 0x24),
        c - (float)*(int*)((char*)self + 0x20),
        d - (float)*(int*)((char*)self + 0x24));
}

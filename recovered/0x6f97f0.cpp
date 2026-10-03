typedef float (*vfn1)(void*, float, float);

extern "C" float getWaterLevelInWorldCoords_6f97f0(void* self, void* v)
{
    return ((vfn1)(*(void***)self)[0x1b0/8])(self,
        *(float*)((char*)v) - (float)*(int*)((char*)self + 0x20),
        *(float*)((char*)v + 0x8) - (float)*(int*)((char*)self + 0x24));
}

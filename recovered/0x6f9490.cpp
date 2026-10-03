typedef float (*vfn1)(void*, float, float);

extern "C" float getWaterLevelInWorldCoords_6f9490(void* self, float x, float y)
{
    return ((vfn1)(*(void***)self)[0x1b0/8])(self,
        x - (float)*(int*)((char*)self + 0x20),
        y - (float)*(int*)((char*)self + 0x24));
}

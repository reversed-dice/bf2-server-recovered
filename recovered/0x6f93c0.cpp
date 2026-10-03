typedef float (*vfn1)(void*, float, float);

extern "C" float getHeightAndNormal_6f93c0(void* self, float x, float y, void* n, unsigned char* h)
{
    return ((vfn1)(*(void***)self)[0x168/8])(self,
        x - (float)*(int*)((char*)self + 0x20),
        y - (float)*(int*)((char*)self + 0x24));
}

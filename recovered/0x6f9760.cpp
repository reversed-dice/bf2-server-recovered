typedef void* (*vfn1)(void*, void*, float, float);

extern "C" void* getNormalInWorldCoords_6f9760(void* self, void* v, void* out)
{
    return ((vfn1)(*(void***)self)[0x138/8])(self, out,
        *(float*)((char*)v) - (float)*(int*)((char*)self + 0x20),
        *(float*)((char*)v + 0x8) - (float)*(int*)((char*)self + 0x24));
}

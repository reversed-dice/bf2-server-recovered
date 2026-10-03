typedef float (*vfn1)(void*);

extern "C" float getAltitude_77b9d0(void* self, void* v)
{
    float y = *(float*)((char*)v + 0x4);
    float r = ((vfn1)(*(void***)self)[0x20/8])(self);
    return y - r;
}

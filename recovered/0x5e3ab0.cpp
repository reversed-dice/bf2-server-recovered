typedef float (*vfn1)(void*);

extern "C" float getVelocity_5e3ab0(void* self)
{
    void* v = *(void**)((char*)self + 0x2c0);
    if (v) {
        float f = ((vfn1)(*(void***)v)[0x180/8])(v);
        if (f != *(float*)0xb2f3c0) {
            return f;
        }
    }
    return *(float*)((char*)(*(void**)((char*)self + 0x330)) + 0x250);
}

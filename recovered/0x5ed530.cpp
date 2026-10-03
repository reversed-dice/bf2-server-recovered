extern "C" void* fn_5ed450(void*);
typedef void (*vfn140)(void*, float);

extern "C" void taxAbility_5ed530(void* self, float f)
{
    float fr = f;
    void* r = fn_5ed450(self);
    if (r) {
        ((vfn140)(*(void***)r)[0x140/8])(r, fr);
    }
}

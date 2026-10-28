// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x560fd0
namespace dice { namespace hfe { namespace world {

extern void* objectManager;

struct ObjectPredicator {
    virtual bool test(void*) const { return true; }
};

bool checkTriggerArea(char* self)
{
    long* v = (long*)(self + 0x270);
    ObjectPredicator pred;
    typedef void (*GetFn)(void*, void const*, float, void*, ObjectPredicator*);
    typedef void const* (*PosFn)(void*);
    GetFn fn = *(GetFn*)(*(char**)objectManager + 0x80);
    union { unsigned int u; float f; } r;
    r.u = *(unsigned int*)(*(char**)(self + 0x240) + 0x1fc);
    fn(objectManager, ((*(PosFn*)(*(char**)self + 0xd8))(self)), r.f, v, &pred);
    return (v[1] - v[0]) >> 3 != 0;
}

}}}

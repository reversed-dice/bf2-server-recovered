// FUNCTION: BF2 0x7c2600
typedef void* (*vfn5)(void*, void*, void*, void*, int);
extern "C" void* target_7c2600(void* self, void* cmd, void* x, void* y)
{
    void* c = *(void**)((char*)cmd + 8);
    ((vfn5*)*(void***)c)[0x20/8](self, c, x, y, 0);
    return self;
}

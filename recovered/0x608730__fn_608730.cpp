// FUNCTION: BF2 0x608730
typedef void* (*vfn1)(void*);

extern "C" bool hasTargetLock_608730(void* self)
{
    void* t = ((vfn1)(*(void***)self)[0x168/8])(self);
    return t && *(char*)((char*)self + 0x50) != 0;
}

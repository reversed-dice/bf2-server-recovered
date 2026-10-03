typedef void (*vfn1)(void*);

extern "C" bool exitCamera_57e1b0(void* self)
{
    void* c = *(void**)((char*)self + 0x298);
    if (c && *(void**)((char*)c + 0x8)) {
        ((vfn1)(*(void***)self)[0x398/8])(self);
        return true;
    }
    return false;
}

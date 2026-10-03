typedef void* (*vfn1)(void*);
typedef void* (*vfn2)(void*);

extern "C" void* getNextChild_6ec2b0(void* self)
{
    if (self) {
        void* r = ((vfn1)(*(void***)self)[0xc0/8])(self);
        if (r) {
            return ((vfn2)(*(void***)r)[0x80/8])(r);
        }
    }
    return 0;
}

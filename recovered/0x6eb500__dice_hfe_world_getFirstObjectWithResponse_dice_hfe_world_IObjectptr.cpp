// FUNCTION: BF2 0x6eb500
namespace dice { namespace hfe { namespace world {
void* getFirstObjectWithResponse_0x6eb500(void* self) {
    if (!self)
        return 0;
    while (self) {
        if (*(void**)((char*)self + 0x90) != 0 && (*(char*)((char*)self + 9) & 1) != 0)
            return self;
        void* c = ((void* (*)(void*))(*(void***)self)[0x3c])(self);
        void* r = getFirstObjectWithResponse_0x6eb500(c);
        if (r)
            return r;
        self = *(void**)((char*)self + 0x58);
    }
    return 0;
}
} } }

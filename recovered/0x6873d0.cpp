extern "C" void* g;
extern "C" void fn_6872b0(void*);
typedef void (*vfn1)(void*, void*);

extern "C" void transformationWasUpdated_6873d0(void* self)
{
    fn_6872b0(self);
    if (*(void**)((char*)self + 0x50) == 0) {
        ((vfn1)(*(void***)g)[0x140/8])(g, self);
    }
}

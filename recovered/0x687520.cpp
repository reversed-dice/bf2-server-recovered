extern "C" void* fn_69a1e0(void*);
typedef void (*vfn1)(void*);

extern "C" void setResponseCacheToDirty_687520(void* self)
{
    if (*(void**)((char*)self + 0x90)) {
        void* o = fn_69a1e0(self);
        void* t = *(void**)((char*)o + 0x90);
        if (t) {
            ((vfn1)(*(void***)t)[0xb8/8])(t);
        }
    }
}

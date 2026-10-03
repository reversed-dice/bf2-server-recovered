extern "C" char fn_601910(void*);
typedef void (*vfn1)(void*);

extern "C" void toggleCamera_6019a0(void* self)
{
    if (fn_601910(self)) {
        void* t = *(void**)((char*)self + 0x90);
        if (t) {
            ((vfn1)(*(void***)t)[0x20/8])(t);
        }
    }
}

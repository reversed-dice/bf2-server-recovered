extern "C" void* fn_4756e0(void*);
typedef void (*vfn60)(void*);

extern "C" void stopPlayingVoMessages_4731c0(void* self)
{
    void* a = fn_4756e0(self);
    if (a) {
        void* b = fn_4756e0(self);
        void* t = *(void**)((char*)b + 0x2178);
        ((vfn60)(*(void***)t)[0x60/8])(t);
    }
}

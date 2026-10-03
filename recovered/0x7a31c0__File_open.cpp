// FUNCTION: BF2 0x7a31c0
namespace dice { namespace hfe { namespace io {
// 0x7a31c0 File::open
extern "C" void fn_close(void* self);                    // File::close
extern "C" void* fileManager;                            // 0x????
typedef void* (*vfn5p)(void*, void*, unsigned int, unsigned int, unsigned int);
typedef void (*vfn0v)(void*);
bool open_0x7a31c0(void* self, void* name, unsigned int mode, unsigned int access, unsigned int flags) {
    fn_close(self);
    void* fm = *(void**)&fileManager;
    void* h = ((vfn5p*)*(void***)fm)[0x30/8](fm, name, mode, access, flags);
    void* old = *(void**)self;
    if (old != 0) {
        ((vfn0v*)*(void***)old)[0x10/8](old);
    }
    *(void**)self = h;
    return h != 0;
}
} } }

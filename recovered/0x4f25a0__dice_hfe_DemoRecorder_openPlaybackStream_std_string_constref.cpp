
// FUNCTION: BF2 0x4f25a0
namespace dice { namespace hfe {
extern "C" void* fn_4073a8(unsigned long);
extern "C" void* fn_4f1ba0(void*, bool, bool);
extern "C" unsigned char fn_4f16c0(void*, void*);
extern "C" void fn_4f4ab0(void*, bool);
extern "C" void fn_4f4ac0(void*, void*);
extern "C" void fn_4f1c50(void*);
bool openPlaybackStream_0x4f25a0(void* self, void* str) {
    if (*(void**)((char*)self + 0x68) != 0)
        return false;
    if (*(void**)((char*)self + 0x98) == 0) {
        void* buf = fn_4073a8(*(unsigned int*)((char*)self + 0x94));
        *(void**)((char*)self + 0x98) = buf;
        if (buf == 0)
            return false;
    }
    void* s = fn_4f1ba0(str, false, false);
    *(void**)((char*)self + 0x68) = s;
    if (s == 0)
        return false;
    *(unsigned char*)((char*)self + 0x79) = 0;
    if (fn_4f16c0(*(void**)((char*)self + 0x80), s) == 0) {
        fn_4f1c50(self);
        return false;
    }
    fn_4f4ab0(*(void**)((char*)self + 0xa0), 0);
    fn_4f4ac0(*(void**)((char*)self + 0xa0), 0);
    return true;
}
}}

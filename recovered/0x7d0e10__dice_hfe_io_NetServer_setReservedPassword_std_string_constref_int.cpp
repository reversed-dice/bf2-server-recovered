// FUNCTION: BF2 0x7d0e10
namespace dice { namespace hfe { namespace io {
extern void fn_408238(void* a, void* b);
struct NSR2 { unsigned char _pad[0x520]; char m_520; unsigned char _pad2[0x55c - 0x521]; int m_55c; int m_560; };
bool setReservedPassword_0x7d0e10(NSR2* self, void* arg2, int arg3) {
    if (__builtin_expect((unsigned long)(*(long*)((char*)*(void**)arg2 - 0x18)) <= 0x20, 1)) {
        fn_408238((char*)self + 0x520, arg2);
        self->m_55c = arg3;
        self->m_560 = arg3;
        return 1;
    }
    return 0;
}
} } }

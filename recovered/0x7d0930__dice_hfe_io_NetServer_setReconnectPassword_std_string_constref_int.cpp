// FUNCTION: BF2 0x7d0930
namespace dice { namespace hfe { namespace io {
extern void fn_408238(void* a, void* b);
struct NSRC { unsigned char _pad[0x518]; char m_518; unsigned char _pad2[0x558 - 0x519]; int m_558; unsigned char _pad3[0x598 - 0x55c]; int m_598; };
bool setReconnectPassword_0x7d0930(NSRC* self, void* arg2, int arg3) {
    if (__builtin_expect((unsigned long)(*(long*)((char*)*(void**)arg2 - 0x18)) <= 0x4, 1)) {
        fn_408238((char*)self + 0x518, arg2);
        self->m_558 = arg3;
        self->m_598 = 0x2bf20;
        return 1;
    }
    return 0;
}
} } }

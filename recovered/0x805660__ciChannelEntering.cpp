// FUNCTION: BF2 0x805660
namespace dice { namespace hfe {
extern void fn_407f68(void* a, int b, int c);
extern void fn_407648(void* a, void* b, int c);
extern void fn_83b030(void* a, void* b);
extern void fn_407ee8(void* a, void* b, int c, void* d) __attribute__((noreturn));
struct CCE { unsigned char _pad[0x870]; void* m_870; };
void ciChannelEntering_0x805660(CCE* self, char* arg2) {
    if (!self)
        fn_407ee8((void*)0xbb03a4, (void*)0xbb0930, 0x134, (void*)0xbb0540);
    char buf[0x228];
    fn_407f68(buf, 0, 0x228);
    fn_407648(buf, arg2, 0x101);
    buf[0x100] = 0;
    fn_83b030(self->m_870, buf);
}
} }

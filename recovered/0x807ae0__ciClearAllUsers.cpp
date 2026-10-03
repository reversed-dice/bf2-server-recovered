// FUNCTION: BF2 0x807ae0
namespace dice { namespace hfe {
extern void fn_83ba90(void* a, void* b, void* c);
extern void fn_407ee8(void* a, void* b, int c, void* d) __attribute__((noreturn));
struct CAU { unsigned char _pad[0x868]; void* m_868; };
void ciClearAllUsers_0x807ae0(CAU* self) {
    if (!self)
        fn_407ee8((void*)0xbb03a4, (void*)0xbb0930, 0x4ee, (void*)0xbb0920);
    fn_83ba90(self->m_868, (void*)0x807a10, self);
}
} }

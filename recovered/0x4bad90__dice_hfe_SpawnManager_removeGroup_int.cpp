// FUNCTION: BF2 0x4bad90
namespace dice { namespace hfe {
extern void fn_4ba9e0(void* a, int b, int c);
void removeGroup_0x4bad90(void* self, int idx) {
    void* s = *(void**)0x010c5420;
    void* p = ((void* (*)(void*, int))(*(void***)s)[0x3])(s, *(int*)0x00c76024);
    if (!p)
        return;
    fn_4ba9e0(self, idx, 0);
}
} }

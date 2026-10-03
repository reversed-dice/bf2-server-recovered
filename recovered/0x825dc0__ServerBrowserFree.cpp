// FUNCTION: BF2 0x825dc0
namespace dice { namespace hfe {
extern void fn_827c10(void* a);
extern void fn_8246a0(void* a);
extern void fn_83ef10(void* a);
void ServerBrowserFree_0x825dc0(void* self) {
    fn_827c10((char*)self + 0x70);
    fn_8246a0(self);
    fn_83ef10(self);
}
} }

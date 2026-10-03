// FUNCTION: BF2 0x818b40
namespace dice { namespace hfe {
extern void* fn_817b70(void);
extern void fn_408428(int a, int b);
void ghttpCloseRequest_0x818b40(void) {
    void* p = fn_817b70();
    if (!p)
        return;
    if (!*(int*)((char*)p + 0x78))
        return;
    fn_408428(*(int*)((char*)p + 0x78), 1);
    *(int*)((char*)p + 0x58) = 0x12;
}
} }

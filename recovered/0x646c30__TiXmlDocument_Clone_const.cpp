// FUNCTION: BF2 0x646c30
namespace dice { namespace hfe {
extern void* fn_407508(int size);
extern void fn_646bc0(void* a);
extern void fn_6456e0(void* a, void* b);
void* Clone_0x646c30(void* self) {
    void* p = fn_407508(0x80);
    fn_646bc0(p);
    if (!p)
        return 0;
    fn_6456e0(self, p);
    return p;
}
} }

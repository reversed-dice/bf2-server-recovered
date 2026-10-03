// FUNCTION: BF2 0x6468d0
namespace dice { namespace hfe {
extern void* fn_407508(int size);
extern void fn_646380(void* a, int b);
extern void fn_6456e0(void* a, void* b);
void* Clone_0x6468d0(void* self) {
    void* p = fn_407508(0x58);
    fn_646380(p, 2);
    *(void**)p = (void*)0xb882d0;
    fn_6456e0(self, p);
    return p;
}
} }

// FUNCTION: BF2 0x6464d0
namespace dice { namespace hfe {
extern void* fn_407508(int size);
extern void fn_646380(void* a, int b);
extern void fn_645620(void* a, void* b);
void* Clone_0x6464d0(void* self) {
    void* p = fn_407508(0x58);
    fn_646380(p, 3);
    *(void**)p = (void*)0xb883f0;
    fn_645620(self, p);
    return p;
}
} }

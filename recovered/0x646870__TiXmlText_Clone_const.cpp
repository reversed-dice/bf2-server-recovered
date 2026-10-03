// FUNCTION: BF2 0x646870
namespace dice { namespace hfe {
extern void* fn_407508(int size);
extern void fn_646380(void* a, int b);
extern void fn_6445f0(void* a, void* b);
extern void fn_646d0(void* a, void* b);
void* Clone_0x646870(void* self) {
    void* p = fn_407508(0x58);
    fn_646380(p, 4);
    *(void**)p = (void*)0xb88330;
    fn_6445f0((char*)p + 0x38, (void*)0xbb25f1);
    fn_646d0(self, p);
    return p;
}
} }

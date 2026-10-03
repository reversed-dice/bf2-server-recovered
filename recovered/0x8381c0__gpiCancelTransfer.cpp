// FUNCTION: BF2 0x8381c0
namespace dice { namespace hfe {
extern int fn_833b80(void* a, void* b, int c, void* d);
extern void fn_837f10(void* a, void* b, int c, int d);
void gpiCancelTransfer_0x8381c0(void* self, void* arg2) {
    void* p = *(void**)((char*)arg2 + 0x28);
    if (!p)
        return;
    int n = fn_833b80(self, p, 0xcf, (char*)arg2 + 0x10);
    if (n)
        return;
    fn_837f10(self, arg2, 0, 0);
}
} }

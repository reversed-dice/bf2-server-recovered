// FUNCTION: BF2 0x50f7b0
namespace dice { namespace hfe {
extern void del_0x0050eed0(void* p);
extern void del_0x0050eed0(void* p);
void f_7e5860(void* self) {
    void* m = *(void**)((char*)self + 0x0);
    if (m)
        del_0x0050eed0(m);
    m = *(void**)((char*)self + 0x8);
    if (m)
        del_0x0050eed0(m);
}
} }

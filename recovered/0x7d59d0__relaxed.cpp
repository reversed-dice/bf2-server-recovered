// FUNCTION: BF2 0x7d59d0
namespace dice { namespace hfe {
extern void del_0x00408198(void* p);
void f_7d5990(void* self) {
    void* m = *(void**)((char*)self + 0x18);
    if (m) {
        del_0x00408198(m);
        *(void**)((char*)self + 0x18) = 0;
    }
    m = *(void**)((char*)self + 0x10);
    if (m) {
        del_0x00408198(m);
        *(void**)((char*)self + 0x10) = 0;
    }
    *(int*)((char*)self + 0x20) = 0x0;
}
} }

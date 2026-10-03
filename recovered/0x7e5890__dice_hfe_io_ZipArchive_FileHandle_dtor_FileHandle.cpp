// FUNCTION: BF2 0x7e5890
namespace dice { namespace hfe {
extern void del_0x0074d100(void* p);
extern void del_0x00408198(void* p);
void f_7e5890(void* self) {
    void* m = *(void**)((char*)self + 0x0);
    if (m)
        del_0x0074d100(m);
    m = *(void**)((char*)self + 0x8);
    if (m)
        del_0x00408198(m);
}
} }

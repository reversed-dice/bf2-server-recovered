// FUNCTION: BF2 0x837e90
namespace dice { namespace hfe {
extern void del_0x83ef10(void* p);
extern void del_0x83ae70(void* p);
void f_0x837e90(void* self) {
    void* m1 = *(void**)((char*)self + 0x48);
    if (m1) {
        del_0x83ef10(m1);
        *(void**)((char*)self + 0x48) = 0;
    }
    void* m2 = *(void**)((char*)self + 0x38);
    if (m2)
        del_0x83ef10(m2);
    void* m3 = *(void**)((char*)self + 0x8);
    if (m3) {
        del_0x83ae70(m3);
        *(void**)((char*)self + 0x8) = 0;
    }
}
} }

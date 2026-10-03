// FUNCTION: BF2 0x781900
// AIObjectArmament dtor v2 0x781900 — vptr + destroy + delete + base + delete
namespace dice { namespace hfe { namespace ai {

extern void destroy_list3(void* l, void* node);
extern void op_delete(void* p);
extern void aioa_base2(void* p);

void aioa_dtor2(void* p) {
    *(void**)p = (void*)0xba3390;
    void* l = (char*)p + 0x40;
    destroy_list3(l, *(void**)((char*)l + 0x10));
    void* m = *(void**)((char*)p + 0x10);
    if (m)
        op_delete(m);
    aioa_base2(p);
    op_delete(p);
}

}}}

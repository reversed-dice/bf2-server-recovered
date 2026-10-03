// FUNCTION: BF2 0x781940
// AIObjectArmament dtor 0x781940 — vptr + destroy + delete + base
namespace dice { namespace hfe { namespace ai {

extern void destroy_list2(void* l, void* node);
extern void op_delete(void* p);
extern void aioa_base(void* p);

void aioa_dtor(void* p) {
    *(void**)p = (void*)0xba3390;
    void* l = (char*)p + 0x40;
    destroy_list2(l, *(void**)((char*)l + 0x10));
    void* m = *(void**)((char*)p + 0x10);
    if (m)
        op_delete(m);
    aioa_base(p);
}

}}}

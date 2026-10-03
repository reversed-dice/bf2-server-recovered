// FUNCTION: BF2 0x4c4440
// SquadManager dtor 0x4c4440 — vptr + destroy + liste + delete
namespace dice { namespace hfe {

extern void sm_destroy(void* p);
extern void sm_list_destroy(void* l, void* node);
extern void op_delete(void* p);

void sm_dtor(void* p) {
    *(void**)p = (void*)0xb38550;
    sm_destroy(p);
    void* l = (char*)p + 0x10;
    sm_list_destroy(l, *(void**)((char*)l + 0x10));
    op_delete(p);
}

}}

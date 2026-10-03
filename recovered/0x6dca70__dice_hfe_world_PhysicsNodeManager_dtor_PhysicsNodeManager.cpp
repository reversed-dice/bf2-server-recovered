// FUNCTION: BF2 0x6dca70
// PhysicsNodeManager dtor 0x6dca70 — vptr + destroy list + base + delete
namespace dice { namespace hfe { namespace world {

extern void destroy_list(void* l);
extern void pnm_base(void* p);
extern void op_delete(void* p);

void pnm_dtor(void* p) {
    *(void**)p = (void*)0xb94330;
    destroy_list((char*)p + 0x10);
    pnm_base(p);
    op_delete(p);
}

}}}

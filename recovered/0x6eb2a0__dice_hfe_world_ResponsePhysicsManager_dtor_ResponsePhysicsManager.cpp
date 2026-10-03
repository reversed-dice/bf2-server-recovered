// FUNCTION: BF2 0x6eb2a0
// ResponsePhysicsManager dtor 0x6eb2a0 — vptr + delete + base + delete
namespace dice { namespace hfe { namespace world {

extern void op_delete(void* p);
extern void rpm_base(void* p);

void rpm_dtor(void* p) {
    *(void**)p = (void*)0xb94cb0;
    void* m = *(void**)((char*)p + 0x68);
    if (m)
        op_delete(m);
    rpm_base(p);
    op_delete(p);
}

}}}

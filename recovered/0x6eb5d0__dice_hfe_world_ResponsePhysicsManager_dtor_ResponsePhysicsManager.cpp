// FUNCTION: BF2 0x6eb5d0
// ResponsePhysicsManager dtor v2 0x6eb5d0 — vptr + delete membre + base
namespace dice { namespace hfe { namespace world {

extern void op_delete(void* p);
extern void rpm_base2(void* p);

void rpm_dtor2(void* p) {
    *(void**)p = (void*)0xb94cb0;
    void* m = *(void**)((char*)p + 0x68);
    if (m)
        op_delete(m);
    rpm_base2(p);
}

}}}

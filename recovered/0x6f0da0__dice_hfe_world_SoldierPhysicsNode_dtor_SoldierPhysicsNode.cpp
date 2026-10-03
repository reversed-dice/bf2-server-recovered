// FUNCTION: BF2 0x6f0da0
// SoldierPhysicsNode dtor 0x6f0da0 — vptr + release + base
namespace dice { namespace hfe { namespace world {

extern void op_release(void* p);
extern void spn_base(void* p);

void spn_dtor(void* p) {
    *(void**)p = (void*)0xb95490;
    void* m = *(void**)((char*)p + 0x110);
    if (m)
        op_release(m);
    spn_base(p);
}

}}}

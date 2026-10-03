// FUNCTION: BF2 0x6d65e0
// IPhysicsNode ctor 0x6d65e0 — vptr + registre node manager
namespace dice { namespace hfe { namespace world {

typedef void* (*VF_GETNODE)(void*);

void ipn_ctor(void* p) {
    *(void**)p = (void*)0xb93470;
    *(void**)((char*)p + 8) = 0;
    void* m = *(void**)0x1140ad0;
    VF_GETNODE f = (VF_GETNODE)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(m) + 0x30));
    *(void**)((char*)p + 8) = f(m);
}

}}}

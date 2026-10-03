// FUNCTION: BF2 0x6f84b0
// StaticPhysicsNode ctor 0x6f84b0 — base + vptr + champs
namespace dice { namespace hfe { namespace world {

extern void ipn_ctor2(void* p);

void spn_ctor(void* p) {
    ipn_ctor2(p);
    *(void**)p = (void*)0xb95e10;
    *(int*)((char*)p + 0x10) = 1;
    *(unsigned char*)((char*)p + 0x14) = 1;
    *(void**)((char*)p + 0x18) = 0;
    *(int*)((char*)p + 0x20) = 0x3f800000;
    *(int*)((char*)p + 0x24) = 0;
}

}}}

// FUNCTION: BF2 0x517b70
// DropVehicle dtor 0x517b70 — 2 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void dv_base2(void* p);

void dv_dtor2(void* p) {
    *(void**)p = (void*)0xb418f0;
    *(void**)((char*)p + 0x100) = (void*)0xb41c00;
    dv_base2(p);
}

}}}

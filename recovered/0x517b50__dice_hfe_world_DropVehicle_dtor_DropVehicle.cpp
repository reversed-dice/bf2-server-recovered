// FUNCTION: BF2 0x517b50
// DropVehicle dtor 0x517b50 — 2 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void dv_base(void* p);

void dv_dtor(void* p) {
    *(void**)p = (void*)0xb418f0;
    *(void**)((char*)p + 0x100) = (void*)0xb41c00;
    dv_base(p);
}

}}}

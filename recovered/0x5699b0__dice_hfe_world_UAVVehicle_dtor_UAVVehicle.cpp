// FUNCTION: BF2 0x5699b0
// UAVVehicle dtor 0x5699b0 — 2 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void uav_base2(void* p);

void uav_dtor2(void* p) {
    *(void**)p = (void*)0xb53f70;
    *(void**)((char*)p + 0x100) = (void*)0xb54280;
    uav_base2(p);
}

}}}

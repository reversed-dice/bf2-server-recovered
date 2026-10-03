// FUNCTION: BF2 0x569990
// UAVVehicle dtor 0x569990 — 2 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void uav_base(void* p);

void uav_dtor(void* p) {
    *(void**)p = (void*)0xb53f70;
    *(void**)((char*)p + 0x100) = (void*)0xb54280;
    uav_base(p);
}

}}}

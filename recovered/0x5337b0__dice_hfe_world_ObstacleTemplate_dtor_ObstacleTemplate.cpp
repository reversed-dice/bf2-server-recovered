// FUNCTION: BF2 0x5337b0
// ObstacleTemplate dtor 0x5337b0 — 4 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void obt_base(void* p);

void obt_dtor(void* p) {
    *(void**)p = (void*)0xb48f70;
    *(void**)((char*)p + 0x10) = (void*)0xb49200;
    *(void**)((char*)p + 0x68) = (void*)0xb49238;
    *(void**)((char*)p + 0x1c8) = (void*)0xb492b8;
    obt_base(p);
}

}}}

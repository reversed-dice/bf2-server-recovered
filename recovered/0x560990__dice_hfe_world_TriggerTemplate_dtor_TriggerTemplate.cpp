// FUNCTION: BF2 0x560990
// TriggerTemplate dtor 0x560990 — 4 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void trt_base(void* p);

void trt_dtor(void* p) {
    *(void**)p = (void*)0xb51fb0;
    *(void**)((char*)p + 0x10) = (void*)0xb52240;
    *(void**)((char*)p + 0x68) = (void*)0xb52278;
    *(void**)((char*)p + 0x1c8) = (void*)0xb522f8;
    trt_base(p);
}

}}}

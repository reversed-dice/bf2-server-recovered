// FUNCTION: BF2 0x7eb0a0
// AxisMapping ctor 0x7eb0a0 — zeros + tail-call init
namespace dice { namespace hfe { namespace io {

extern void axismap_init(void* p);

void axismap_ctor(void* p) {
    int zero = 0;
    *(int*)p = zero;
    *(int*)((char*)p + 4) = zero;
    *(int*)((char*)p + 0x40) = zero;
    *(void**)((char*)p + 0x48) = 0;
    *(unsigned char*)((char*)p + 0x50) = 0;
    axismap_init(p);
}

}}}


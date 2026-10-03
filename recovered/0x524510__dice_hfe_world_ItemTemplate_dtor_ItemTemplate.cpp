// FUNCTION: BF2 0x524510
// ItemTemplate dtor 0x524510 — 5 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void it_base(void* p);

void it_dtor(void* p) {
    *(void**)p = (void*)0xb43b70;
    *(void**)((char*)p + 0x10) = (void*)0xb43e50;
    *(void**)((char*)p + 0x68) = (void*)0xb43e88;
    *(void**)((char*)p + 0x1c8) = (void*)0xb43f08;
    *(void**)((char*)p + 0x1f8) = (void*)0xb43f70;
    it_base(p);
}

}}}

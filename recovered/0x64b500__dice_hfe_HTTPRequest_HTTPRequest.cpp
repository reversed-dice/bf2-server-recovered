// FUNCTION: BF2 0x64b500
// HTTPRequest ctor 0x64b500 — init champs + tail-call init
namespace dice { namespace hfe {

extern void httpreq_init(void* p);

void httpreq_ctor(void* p) {
    *(void**)p = (void*)0xb89750;
    *(unsigned char*)((char*)p + 8) = 0;
    *(unsigned char*)((char*)p + 9) = 0;
    *(int*)((char*)p + 0xc) = -1;
    *(void**)((char*)p + 0x10) = 0;
    *(int*)((char*)p + 0x18) = -1;
    *(int*)((char*)p + 0x1c) = 1;
    httpreq_init(p);
}

}}

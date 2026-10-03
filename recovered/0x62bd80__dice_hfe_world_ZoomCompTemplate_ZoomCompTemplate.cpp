// FUNCTION: BF2 0x62bd80
// ZoomCompTemplate ctor 0x62bd80 — 2 vptr + dword + byte
namespace dice { namespace hfe { namespace world {

void zct_ctor(void* p) {
    *(void**)p = (void*)0xb809f0;
    *(void**)((char*)p + 8) = (void*)0xb80a68;
    *(unsigned int*)((char*)p + 0x10) = 0x1f;
    *(unsigned char*)((char*)p + 0x14) = 0;
}

}}}

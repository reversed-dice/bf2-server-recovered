// FUNCTION: BF2 0x5727e0
// ZiplineContainerTemplate dtor 0x5727e0 — 5 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void zct_base2(void* p);

void zct_dtor2(void* p) {
    *(void**)p = (void*)0xb55ed0;
    *(void**)((char*)p + 0x10) = (void*)0xb56370;
    *(void**)((char*)p + 0x68) = (void*)0xb563a8;
    *(void**)((char*)p + 0x1c8) = (void*)0xb56428;
    *(void**)((char*)p + 0x1f8) = (void*)0xb56490;
    zct_base2(p);
}

}}}

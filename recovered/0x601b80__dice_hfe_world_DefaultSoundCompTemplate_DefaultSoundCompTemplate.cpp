// FUNCTION: BF2 0x601b80
// DefaultSoundCompTemplate ctor 0x601b80 — 2 vptr + dword + byte + dword
namespace dice { namespace hfe { namespace world {

void dsct_ctor(void* p) {
    *(void**)p = (void*)0xb76270;
    *(void**)((char*)p + 8) = (void*)0xb762e8;
    *(int*)((char*)p + 0x10) = 1;
    *(unsigned char*)((char*)p + 0x14) = 1;
    *(int*)((char*)p + 0x18) = -1;
}

}}}

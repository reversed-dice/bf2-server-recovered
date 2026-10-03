// FUNCTION: BF2 0x627bc0
// DefaultPenetrateCompTemplate ctor 0x627ba0 — 2 vptr + dword + 2 bytes
namespace dice { namespace hfe { namespace world {

void dpct_ctor(void* p) {
    *(void**)p = (void*)0xb7f810;
    *(void**)((char*)p + 8) = (void*)0xb7f880;
    *(int*)((char*)p + 0x10) = 1;
    *(unsigned char*)((char*)p + 0x14) = 1;
    *(unsigned char*)((char*)p + 0x15) = 1;
}

}}}

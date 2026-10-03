// FUNCTION: BF2 0x6178b0
// DefaultCollisionCompTemplate ctor 0x617540 — 2 vptr + dword + 2 bytes
namespace dice { namespace hfe { namespace world {

void dcct_ctor(void* p) {
    *(void**)p = (void*)0xb7bab0;
    *(void**)((char*)p + 8) = (void*)0xb7bb28;
    *(int*)((char*)p + 0x10) = 1;
    *(unsigned char*)((char*)p + 0x14) = 0;
    *(unsigned char*)((char*)p + 0x15) = 0;
}

}}}

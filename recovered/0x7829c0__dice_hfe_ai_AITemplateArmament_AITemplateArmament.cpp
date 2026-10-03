// FUNCTION: BF2 0x7829c0
// AITemplateArmament ctor 0x7829c0 — vptr + byte + dword
namespace dice { namespace hfe { namespace ai {

void aitarm_ctor2(void* p) {
    *(void**)p = (void*)0xba36d0;
    *(unsigned char*)((char*)p + 8) = 0;
    *(int*)((char*)p + 0xc) = 0;
}

}}}

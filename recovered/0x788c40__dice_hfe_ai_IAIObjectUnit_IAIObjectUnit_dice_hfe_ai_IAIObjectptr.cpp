// FUNCTION: BF2 0x788c40
// IAIObjectUnit ctor 0x788c30 — store + vptr
namespace dice { namespace hfe { namespace ai {

void iaiou_ctor(void* p, void* obj) {
    *(void**)((char*)p + 8) = obj;
    *(void**)p = (void*)0xba4790;
}

}}}

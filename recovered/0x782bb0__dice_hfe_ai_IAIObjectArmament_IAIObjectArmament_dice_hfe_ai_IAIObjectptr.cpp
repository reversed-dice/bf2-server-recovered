// FUNCTION: BF2 0x782bb0
// IAIObjectArmament ctor 0x782bb0 — store + vptr
namespace dice { namespace hfe { namespace ai {

void iaioa_ctor(void* p, void* obj) {
    *(void**)((char*)p + 8) = obj;
    *(void**)p = (void*)0xba3750;
}

}}}

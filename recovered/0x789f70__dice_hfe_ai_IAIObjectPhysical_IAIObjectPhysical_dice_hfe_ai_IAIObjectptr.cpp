// FUNCTION: BF2 0x789f70
// IAIObjectPhysical ctor 0x789f70 — store + vptr
namespace dice { namespace hfe { namespace ai {

void iaiop_ctor(void* p, void* obj) {
    *(void**)((char*)p + 8) = obj;
    *(void**)p = (void*)0xba4b30;
}

}}}

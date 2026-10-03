// FUNCTION: BF2 0x7852e0
// IAIObjectControlInfo ctor 0x7852d0 — store + vptr
namespace dice { namespace hfe { namespace ai {

void iaioci_ctor(void* p, void* obj) {
    *(void**)((char*)p + 8) = obj;
    *(void**)p = (void*)0xba3bd0;
}

}}}

// FUNCTION: BF2 0x786d70
// IAIObjectMobile ctor 0x786d70 — store + vptr
namespace dice { namespace hfe { namespace ai {

void iaiom_ctor(void* p, void* obj) {
    *(void**)((char*)p + 8) = obj;
    *(void**)p = (void*)0xba4390;
}

}}}

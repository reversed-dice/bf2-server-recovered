// FUNCTION: BF2 0x786210
// IAIObjectCover ctor 0x786200 — store + vptr
namespace dice { namespace hfe { namespace ai {

void iaioc_ctor(void* p, void* obj) {
    *(void**)((char*)p + 8) = obj;
    *(void**)p = (void*)0xba3f70;
}

}}}

// FUNCTION: BF2 0x7711f0
// TargetData ctor 0x7711f0 — 3 stores
namespace dice { namespace hfe { namespace ai {

void td_ctor2(void* p, unsigned int id, void* pos, void* obj) {
    *(unsigned int*)p = id;
    *(void**)((char*)p + 8) = pos;
    *(void**)((char*)p + 0x10) = obj;
}

}}}

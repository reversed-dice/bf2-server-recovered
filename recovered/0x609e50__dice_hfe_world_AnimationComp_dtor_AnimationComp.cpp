// FUNCTION: BF2 0x609e50
// AnimationComp dtor 0x609e50 — 2 vptr + delete
namespace dice { namespace hfe { namespace world {

extern void op_delete_ac(void* p);

void ac_dtor(void* p) {
    *(void**)((char*)p + 0x20) = (void*)0xb78490;
    *(void**)p = (void*)0xb70110;
    op_delete_ac(p);
}

}}}

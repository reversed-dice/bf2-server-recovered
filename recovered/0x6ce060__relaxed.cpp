// FUNCTION: BF2 0x6ce060
// Trigger dtor 0x6ce090 — fonction libre, 2 deletes conditionnels
namespace dice { namespace anim {

extern void op_delete(void* p);

void trigger_dtor(void* p) {
    *(void**)p = (void*)0xb91a50;
    void* m20 = *(void**)((char*)p + 0x20);
    if (m20)
        op_delete(m20);
    void* m8 = *(void**)((char*)p + 0x8);
    if (m8)
        op_delete(m8);
}

}}

// re-trigger validate 2026-08-06 20:36:45

// re-trigger validate 2026-08-07 00:28:35

// FUNCTION: BF2 0x74b070
// Thread dtor 0x74b070 — vptr + delete [0x8]
namespace dice { namespace hfe {

extern void op_delete(void* p);

void thread_dtor(void* p) {
    *(void**)p = (void*)0xb9a550;
    op_delete(*(void**)((char*)p + 8));
}

}}

// re-trigger validate 2026-08-06 20:38:11

// re-trigger validate 2026-08-07 00:30:03

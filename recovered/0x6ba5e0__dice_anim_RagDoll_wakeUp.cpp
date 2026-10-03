// FUNCTION: BF2 0x6ba5e0
// RagDoll::wakeUp 0x6ba5e0 — global + flag + store
namespace dice { namespace anim {

void wakeUp(void* self) {
    void* g = *(void**)0x1093750;
    *(unsigned int*)((char*)self + 0x4c) = *(unsigned int*)g;
    if (*(unsigned char*)((char*)self + 0x31) == 0)
        *(unsigned char*)((char*)self + 0x31) = 1;
}

}}

// re-trigger validate 2026-08-06 20:40:27

// re-trigger validate 2026-08-07 00:31:42

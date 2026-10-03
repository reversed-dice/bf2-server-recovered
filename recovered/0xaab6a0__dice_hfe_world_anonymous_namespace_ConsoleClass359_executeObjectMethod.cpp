// FUNCTION: BF2 0xaab6a0
namespace dice { namespace hfe {

typedef void* (*afn_aab6a0)(void*);
typedef unsigned int (*qfn_aab6a0)(void*);
typedef void (*sfn_aab6a0)(void*, unsigned int, unsigned int);

// Inlined at four call sites, one of which discards the result, so it has to
// be forced inline.
static inline __attribute__((always_inline)) void* active_aab6a0()
{
    void* m = *(void**)0x0112ee40;
    return (*(afn_aab6a0*)(*(char**)m + 0xa0))(m);
}

void* executeObjectMethod_aab6a0(char* self)
{
    void* result = 0;
    int n = *(int*)(self + 0x30);
    if (n == 0) {
        *(unsigned char*)(self + 0x108) = 1;
        *(unsigned int*)0x0112ee28 = 0x1;
        active_aab6a0();
        void* p = active_aab6a0();
        unsigned int r = (*(qfn_aab6a0*)(*(char**)p + 0x90))(p);
        *(bool*)(self + 0x10a) = (*(unsigned int*)0x0112ee28 & r) != 0;
        // Assigned AFTER the test consumes EAX, so RAX is free to hold the
        // result address. Assigned before it, the result lands in RDX with a
        // trailing MOV RAX,RDX and the score stops at 86.96%.
        result = self + 0x10a;
    } else if (n == 1) {
        char v = **(char**)(self + 0x38);
        *(unsigned char*)(self + 0x108) = 0;
        *(unsigned int*)0x0112ee28 = 0x1;
        active_aab6a0();
        // The second lookup sits inside each arm, not before the branch.
        if (v) {
            void* q = active_aab6a0();
            (*(sfn_aab6a0*)(*(char**)q + 0x98))(q, *(unsigned int*)0x0112ee28, 0);
        } else {
            void* q = active_aab6a0();
            (*(sfn_aab6a0*)(*(char**)q + 0x98))(q, 0, *(unsigned int*)0x0112ee28);
        }
    }
    return result;
}

} }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass359_executeObjectMethod (0xaab6a0)

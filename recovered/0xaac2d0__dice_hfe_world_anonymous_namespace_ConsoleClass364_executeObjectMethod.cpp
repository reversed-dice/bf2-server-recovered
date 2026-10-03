// FUNCTION: BF2 0xaac2d0
namespace dice { namespace hfe {

typedef void* (*afn_aac2d0)(void*);
typedef unsigned int (*qfn_aac2d0)(void*);
typedef void (*sfn_aac2d0)(void*, unsigned int, unsigned int);

// Inlined at four call sites, one of which discards the result, so it has to
// be forced inline.
static inline __attribute__((always_inline)) void* active_aac2d0()
{
    void* m = *(void**)0x0112ee40;
    return (*(afn_aac2d0*)(*(char**)m + 0xa0))(m);
}

void* executeObjectMethod_aac2d0(char* self)
{
    void* result = 0;
    int n = *(int*)(self + 0x30);
    if (n == 0) {
        *(unsigned char*)(self + 0x108) = 1;
        *(unsigned int*)0x0112ee28 = 0x20;
        active_aac2d0();
        void* p = active_aac2d0();
        unsigned int r = (*(qfn_aac2d0*)(*(char**)p + 0x90))(p);
        *(bool*)(self + 0x10a) = (*(unsigned int*)0x0112ee28 & r) != 0;
        // Assigned AFTER the test consumes EAX, so RAX is free to hold the
        // result address. Assigned before it, the result lands in RDX with a
        // trailing MOV RAX,RDX and the score stops at 86.96%.
        result = self + 0x10a;
    } else if (n == 1) {
        char v = **(char**)(self + 0x38);
        *(unsigned char*)(self + 0x108) = 0;
        *(unsigned int*)0x0112ee28 = 0x20;
        active_aac2d0();
        // The second lookup sits inside each arm, not before the branch.
        if (v) {
            void* q = active_aac2d0();
            (*(sfn_aac2d0*)(*(char**)q + 0x98))(q, *(unsigned int*)0x0112ee28, 0);
        } else {
            void* q = active_aac2d0();
            (*(sfn_aac2d0*)(*(char**)q + 0x98))(q, 0, *(unsigned int*)0x0112ee28);
        }
    }
    return result;
}

} }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass364_executeObjectMethod (0xaac2d0)

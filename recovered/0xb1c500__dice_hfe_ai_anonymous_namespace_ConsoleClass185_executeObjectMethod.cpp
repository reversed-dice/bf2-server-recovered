// FUNCTION: BF2 0xb1c500
namespace dice { namespace hfe {

// Declared, not defined: the target CALLs it, so this is a relocation.
void* getActivePlugIn_b1c500(void* inst);

typedef int (*chkfn_b1c500)(void*);

// Used from BOTH branches, so it has to be forced inline: GCC 4.0 would
// otherwise emit it out of line and the whole body changes shape.
static inline __attribute__((always_inline)) void* activePlugIn_b1c500()
{
    void* inst = *(void**)0x010adf60;
    if (inst) {
        void* p = getActivePlugIn_b1c500(inst);
        if (p) {
            if ((*(chkfn_b1c500*)(*(char**)p + 0x18))(p) == 1) return p;
        }
    }
    return 0;
}

void* executeObjectMethod_b1c500(char* self)
{
    // ONE return of a merged value, never a return per branch:
    // apply_return_prediction (predict.c) bails unless the returned value is
    // an SSA PHI, so with separate returns PRED_NULL_RETURN never fires and
    // bb-reorder never duplicates the cold exit.
    void* result = 0;
    if (*(int*)(self + 0x30) == 0) {
        *(unsigned char*)(self + 0x108) = 1;
        void* p = activePlugIn_b1c500();
        *(unsigned int*)(self + 0x10c) = *(unsigned int*)((char*)p + 0x1c);
        result = self + 0x10c;
    } else if (*(int*)(self + 0x30) == 1) {
        // Argument value read BEFORE the flag store, as the target does.
        unsigned int v = **(unsigned int**)(self + 0x38);
        *(unsigned char*)(self + 0x108) = 0;
        void* p = activePlugIn_b1c500();
        *(unsigned int*)((char*)p + 0x1c) = v;
    }
    return result;
}

} }
// REVERSED_FUNCTION: dice_hfe_ai_anonymous_namespace_ConsoleClass185_executeObjectMethod (0xb1c500)

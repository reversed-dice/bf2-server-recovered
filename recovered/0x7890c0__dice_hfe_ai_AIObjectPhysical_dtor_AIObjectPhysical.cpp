// FUNCTION: BF2 0x7890c0
namespace dice { namespace hfe { namespace ai {
typedef void (*vfn_188)(void*, int, void*);
extern void fn_789f90(void* self);
void cb_7890c0(void* self) {
    *(void**)((char*)self + 0x0) = (void*)0xba4910;
    if (*(char*)((char*)*(void**)((char*)self + 0x10) + 0x21) != 0) {
        void* g = *(void**)0x010add68;
        (*(vfn_188*)((char*)*(void**)g + 0x188))(g, *(int*)((char*)self + 0x28), *(void**)((char*)self + 0x8));
    }
    fn_789f90(self);
}
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectPhysical_dtor_AIObjectPhysical (0x7890c0)

// FUNCTION: BF2 0x4f7390
namespace dice { namespace hfe { namespace python {
extern int fn_4f8b30(void* obj, int idx, int* out);
extern void* operator_new(unsigned long);
extern void rankEvent_ctor(void*, int, int, int, int);
extern void* dice_hfe_game;

void* cb_4f7390(void* self, void* arg) {
    int a0, a1, a2;
    int r0 = fn_4f8b30(arg, 0, &a0);
    int r1 = fn_4f8b30(arg, 1, &a1);
    int r2 = fn_4f8b30(arg, 2, &a2);
    if (r0 + r1 + r2 != 0)
        return 0;
    typedef void (*vfn_t)(void*, void*);
    vfn_t vfn = *(vfn_t*)((char*)*(void**)dice_hfe_game + 0x108);
    void* ev = operator_new(0x20);
    rankEvent_ctor(ev, 1, a1, a2, a0);
    void* g = dice_hfe_game;
    vfn(g, ev);
    (*(int*)0x00f6c850)++;
    return (void*)0xf6c850;
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_sgl_sendRankEvent_objectptr_objectptr (0x4f7390)

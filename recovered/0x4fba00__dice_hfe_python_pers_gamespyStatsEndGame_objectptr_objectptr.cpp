// FUNCTION: BF2 0x4fba00
namespace dice { namespace hfe { namespace python {
typedef void* (*vfn_18)(void*, int);
typedef void* (*vfn_e8)(void*);
typedef void (*vfn_38)(void*);
void* cb_4fba00() {
    void* g = *(void**)0x010c5420;
    void* q = g ? (*(vfn_18*)((char*)*(void**)g + 0x18))(g, *(int*)0x00c76024) : 0;
    void* r = (*(vfn_e8*)((char*)*(void**)q + 0xe8))(q);
    (*(vfn_38*)((char*)*(void**)r + 0x38))(r);
    (*(int*)0x00f6c850)++;
    return (void*)0xf6c850;
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_pers_gamespyStatsEndGame_objectptr_objectptr (0x4fba00)

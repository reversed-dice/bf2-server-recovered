// FUNCTION: BF2 0x4f9fb0
namespace dice { namespace hfe { namespace python {
extern int fn_4f9680(void* obj, int idx, void** out);
extern void* PyInt_FromLong(long);
extern int dice_hfe_world_IID_IPlayerControlObject;

void* cb_4f9fb0(void* self, void* arg) {
    void* obj = 0;
    if (fn_4f9680(arg, 0, &obj))
        return 0;
    typedef void* (*qifn_t)(void*, int);
    qifn_t qifn = *(qifn_t*)((char*)*(void**)obj + 0x18);
    void* pco = qifn(obj, dice_hfe_world_IID_IPlayerControlObject);
    typedef int (*getfn_t)(void*);
    getfn_t getfn = *(getfn_t*)((char*)*(void**)pco + 0x130);
    int team = getfn(pco);
    return PyInt_FromLong(team);
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_object_pco_getTeam_objectptr_objectptr (0x4f9fb0)

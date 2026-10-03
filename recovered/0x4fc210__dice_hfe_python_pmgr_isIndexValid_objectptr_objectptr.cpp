// FUNCTION: BF2 0x4fc210
namespace dice { namespace hfe { namespace python {
extern int fn_4f8b30(void* obj, int idx, int* out);
extern void* PyInt_FromLong(long);
extern void* dice_hfe_world_playerManager;

void* cb_4fc210(void* self, void* arg) {
    int local_4;
    void* r = 0;
    if (fn_4f8b30(arg, 0, &local_4))
        return r;
    void* vtable = *(void**)dice_hfe_world_playerManager;
    typedef long (*fn_t)(void*, int);
    fn_t fn = *(fn_t*)((char*)vtable + 0x40);
    long v = fn(dice_hfe_world_playerManager, local_4);
    return PyInt_FromLong(v != 0);
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_pmgr_isIndexValid_objectptr_objectptr (0x4fc210)

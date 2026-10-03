// FUNCTION: BF2 0x4fa010
namespace dice { namespace hfe { namespace python {
extern int fn_4f9680(void* obj, int idx, void** out);
extern void* PyInt_FromLong(long);

void* cb_4fa010(void* self, void* arg) {
    void* obj = 0;
    if (fn_4f9680(arg, 0, &obj))
        return 0;
    void* pco = *(void**)((char*)obj + 0x78);
    int wreck;
    if (pco != 0) {
        typedef int (*fn_t)(void*);
        fn_t fn = *(fn_t*)((char*)*(void**)pco + 0xb8);
        if (fn(pco) == 1)
            wreck = 1;
        else
            wreck = 0;
    } else {
        wreck = 0;
    }
    return PyInt_FromLong(wreck);
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_object_pco_getIsWreck_objectptr_objectptr (0x4fa010)

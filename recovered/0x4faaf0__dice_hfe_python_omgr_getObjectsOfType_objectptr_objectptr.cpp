// FUNCTION: BF2 0x4faaf0
#include <string>
namespace dice { namespace hfe { namespace python {
extern int fn_4f8da0(void*, int, std::string*);
extern void* classManager;
extern void deque_init(void*, unsigned long);
extern void deque_dtor(void*);
extern void filterObjects(int, void*);
extern void* buildObjectList(void*);
extern void PyErr_SetString(void*, const char*);
extern void* PyExc_RuntimeError;

void* cb_4faaf0(void* self, void* arg) {
    std::string s;
    void* ret = 0;
    if (fn_4f8da0(arg, 0, &s) == 0) {
        typedef char (*fn_t)(void*, const std::string&, int*);
        fn_t fn = *(fn_t*)((char*)*(void**)classManager + 0x58);
        int cid;
        if (fn(classManager, s, &cid) == 0)
            PyErr_SetString(PyExc_RuntimeError, "unknown object type");
        char deque[0x50];
        *(void**)(deque + 0) = 0;
        *(void**)(deque + 8) = 0;
        *(void**)(deque + 0x10) = 0;
        *(void**)(deque + 0x18) = 0;
        *(void**)(deque + 0x20) = 0;
        *(void**)(deque + 0x28) = 0;
        *(void**)(deque + 0x30) = 0;
        *(void**)(deque + 0x38) = 0;
        *(void**)(deque + 0x40) = 0;
        *(void**)(deque + 0x48) = 0;
        deque_init(deque, 0);
        filterObjects(cid, deque);
        ret = buildObjectList(deque);
        deque_dtor(deque);
    }
    return ret;
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_omgr_getObjectsOfType_objectptr_objectptr (0x4faaf0)

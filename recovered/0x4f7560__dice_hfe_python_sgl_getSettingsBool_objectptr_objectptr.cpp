// FUNCTION: BF2 0x4f7560
#include <string>
namespace dice { namespace hfe { namespace python {
extern int fn_4f8da0(void*, int, std::string*);
extern void* PyInt_FromLong(long);
extern void* settings_ptr;

void* cb_4f7560(void* self, void* arg) {
    std::string s;
    void* ret = 0;
    if (fn_4f8da0(arg, 0, &s) == 0) {
        typedef void* (*fn_t)(void*, const std::string&, char*);
        fn_t fn = *(fn_t*)((char*)*(void**)settings_ptr + 0xa0);
        char b = 0;
        void* r = fn(settings_ptr, s, &b);
        ret = PyInt_FromLong((long)(unsigned char)*(char*)r);
    }
    return ret;
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_sgl_getSettingsBool_objectptr_objectptr (0x4f7560)
